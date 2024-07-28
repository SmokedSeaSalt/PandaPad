#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_err.h"

/* Littlevgl specific */
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#include "lvgl_helpers.h"

/*********************
 *      fonts
 *********************/
//fipps_4
//fipps_8
LV_FONT_DECLARE(fipps_8)
//fipps_16
//pixel_bit_advanced_4
//pixel_bit_advanced_8
LV_FONT_DECLARE(pixel_bit_advanced_8)
//pixel_bit_advanced_16
LV_FONT_DECLARE(pixel_bit_advanced_16)

/*********************
 *      DEFINES
 *********************/
#define TAG "display"
#define LV_TICK_PERIOD_MS 1

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_tick_task(void *arg);
static void guiTask(void *pvParameter);
static void create_default_menu(void);

/**********************
 *   APPLICATION MAIN
 **********************/
void display_init() {

    /* If you want to use a task to create the graphic, you NEED to create a Pinned task
     * Otherwise there can be problem such as memory corruption and so on.
     * NOTE: When not using Wi-Fi nor Bluetooth you can pin the guiTask to core 0 */
    xTaskCreatePinnedToCore(guiTask, "gui", 4096*2, NULL, 0, NULL, 1);
}

/* Creates a semaphore to handle concurrent call to lvgl stuff
 * If you wish to call *any* lvgl function from other threads/tasks
 * you should lock on the very same semaphore! */
SemaphoreHandle_t xGuiSemaphore;

static void guiTask(void *pvParameter) {

    (void) pvParameter;
    xGuiSemaphore = xSemaphoreCreateMutex();

    lv_init();

    /* Initialize SPI or I2C bus used by the drivers */
    lvgl_driver_init();

    lv_color_t* buf1 = heap_caps_malloc((DISP_BUF_SIZE * sizeof(lv_color_t)), MALLOC_CAP_DMA);
    assert(buf1 != NULL);

    /* Use double buffered when not working with monochrome displays */
#ifndef CONFIG_LV_TFT_DISPLAY_MONOCHROME
    lv_color_t* buf2 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
    assert(buf2 != NULL);
#else
    static lv_color_t *buf2 = NULL;
#endif

    static lv_disp_draw_buf_t draw_buf;

    uint32_t size_in_px = DISP_BUF_SIZE;

#if defined CONFIG_LV_TFT_DISPLAY_CONTROLLER_IL3820         \
    || defined CONFIG_LV_TFT_DISPLAY_CONTROLLER_JD79653A    \
    || defined CONFIG_LV_TFT_DISPLAY_CONTROLLER_UC8151D     \
    || defined CONFIG_LV_TFT_DISPLAY_CONTROLLER_SSD1680     \
    || defined CONFIG_LV_TFT_DISPLAY_CONTROLLER_SSD1306

    /* Actual size in pixels, not bytes. */
    size_in_px *= 8;
#endif

    /* Initialize the working buffer depending on the selected display.
     * NOTE: buf2 == NULL when using monochrome displays. */
    lv_disp_draw_buf_init(&draw_buf, buf1, buf2, size_in_px);

    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.flush_cb = disp_driver_flush;

#if defined CONFIG_DISPLAY_ORIENTATION_PORTRAIT || defined CONFIG_DISPLAY_ORIENTATION_PORTRAIT_INVERTED
    disp_drv.rotated = 1;
#endif

    /* When using a monochrome display we need to register the callbacks:
     * - rounder_cb
     * - set_px_cb */
#ifdef CONFIG_LV_TFT_DISPLAY_MONOCHROME
    disp_drv.rounder_cb = disp_driver_rounder;
    disp_drv.set_px_cb = disp_driver_set_px;
#endif

    disp_drv.draw_buf = &draw_buf;
    disp_drv.hor_res = LV_VER_RES_MAX;
    disp_drv.ver_res = LV_HOR_RES_MAX;
    lv_disp_drv_register(&disp_drv);


    /* Create and start a periodic timer interrupt to call lv_tick_inc */
    const esp_timer_create_args_t periodic_timer_args = {
        .callback = &lv_tick_task,
        .name = "periodic_gui"
    };
    esp_timer_handle_t periodic_timer;
    ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, LV_TICK_PERIOD_MS * 1000));

    /* Create the demo application */
    create_default_menu();

    while (1) {
        /* Delay 1 tick (assumes FreeRTOS tick is 10ms */
        vTaskDelay(pdMS_TO_TICKS(10));

        /* Try to take the semaphore, call lvgl related function on success */
        if (pdTRUE == xSemaphoreTake(xGuiSemaphore, portMAX_DELAY)) {
            lv_task_handler();
            xSemaphoreGive(xGuiSemaphore);
       }
    }

    /* A task should NEVER return */
    free(buf1);
#ifndef CONFIG_LV_TFT_DISPLAY_MONOCHROME
    free(buf2);
#endif
    vTaskDelete(NULL);
}

static void create_default_menu(void)
{
    // Create a style
    static lv_style_t style_grid_outline;
    lv_style_init(&style_grid_outline);
    lv_style_set_text_font(&style_grid_outline, &pixel_bit_advanced_16);

    // Set the outline properties
    lv_style_set_outline_width(&style_grid_outline, 1);
    lv_style_set_outline_pad(&style_grid_outline, -1);


    //296 = 52, 52, 48, 48, 48, 48
    static lv_coord_t l_col_dsc[] = {52, 52, 192, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t r_col_dsc[] = {52, 52, 48, 48, 48, 48, LV_GRID_TEMPLATE_LAST};
    //128 = 25, 25, 26, 26, 26
    static lv_coord_t l_row_dsc[] = {25, 25, 26, 26, 26, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t r_row_dsc[] = {26, 34, 34, 34, LV_GRID_TEMPLATE_LAST};

    /*Create a container with grid for left side*/
    lv_obj_t * l_cont = lv_obj_create(lv_scr_act());
    lv_obj_set_grid_align(l_cont, LV_GRID_ALIGN_SPACE_BETWEEN, LV_GRID_ALIGN_SPACE_BETWEEN);
    lv_obj_set_grid_dsc_array(l_cont, l_col_dsc, l_row_dsc);
    lv_obj_set_size(l_cont, 296, 128);
    lv_obj_center(l_cont);

    /*Create a container with grid for left side*/
    lv_obj_t * r_cont = lv_obj_create(lv_scr_act());
    lv_obj_set_grid_align(r_cont, LV_GRID_ALIGN_SPACE_BETWEEN, LV_GRID_ALIGN_SPACE_BETWEEN);
    lv_obj_set_grid_dsc_array(r_cont, r_col_dsc, r_row_dsc);
    lv_obj_set_size(r_cont, 296, 128);
    lv_obj_center(r_cont);


    lv_obj_t * label;
    lv_obj_t * obj;

    /*
    |     Left      |             Right             |
    |---------------|-------------------------------|
    -------------------------------------------------
    |   0   |   1   |                               |
    -----------------           Menu Name           -
    |   2   |   3   |                               |
    -------------------------------------------------
    |               |   4   |   5   |   6   |   7   |
    -      Menu     ---------------------------------
    |      Info     |   8   |   9   |   A   |   B   |
    -               ---------------------------------
    |               |   C   |   D   |   E   |   F   |
    -------------------------------------------------
    */

    /*Create left side*/
    /*Cell 0 to 0;0 with width 1;1*/
    obj = lv_obj_create(l_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, l_col_dsc[0], l_row_dsc[0]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 0, 1,
                         LV_GRID_ALIGN_STRETCH, 0, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "0");
    lv_obj_center(label);

    /*Cell 1 to 1;0 with width 1;1*/
    obj = lv_obj_create(l_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, l_col_dsc[1], l_row_dsc[0]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 1, 1,
                         LV_GRID_ALIGN_STRETCH, 0, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "1");
    lv_obj_center(label);

    /*Cell 2 to 0;1 with width 1;1*/
    obj = lv_obj_create(l_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, l_col_dsc[0], l_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 0, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "2");
    lv_obj_center(label);

    /*Cell 3 to 1;1 with width 1;1*/
    obj = lv_obj_create(l_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, l_col_dsc[1], l_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 1, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "3");
    lv_obj_center(label);

    /*Cell Menu Info to 0;2 with width 2;3*/
    obj = lv_obj_create(l_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, 104, 78);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 0, 2,
                         LV_GRID_ALIGN_STRETCH, 2, 3);
    label = lv_label_create(obj);
    lv_label_set_text(label, "Menu\nInfo");
    lv_obj_center(label);


    /*Create right side*/
    /*Cell Menu Name to 2;0 with width 4;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, 192, r_row_dsc[0]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 2, 4,
                         LV_GRID_ALIGN_STRETCH, 0, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "Menu Name");
    lv_obj_center(label);
    
    /*Cell 4 to 2;1 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[2], r_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 2, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "4");
    lv_obj_center(label);
    
    /*Cell 5 to 3;1 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[3], r_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 3, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "5");
    lv_obj_center(label);

    /*Cell 6 to 4;1 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[4], r_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 4, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "6");
    lv_obj_center(label);

    /*Cell 7 to 5;1 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[5], r_row_dsc[1]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 5, 1,
                         LV_GRID_ALIGN_STRETCH, 1, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "7");
    lv_obj_center(label);

    /*Cell 8 to 2;2 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[2], r_row_dsc[2]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 2, 1,
                         LV_GRID_ALIGN_STRETCH, 2, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "8");
    lv_obj_center(label);
    
    /*Cell 9 to 3;2 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[3], r_row_dsc[2]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 3, 1,
                         LV_GRID_ALIGN_STRETCH, 2, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "9");
    lv_obj_center(label);

    /*Cell A to 4;2 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[4], r_row_dsc[2]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 4, 1,
                         LV_GRID_ALIGN_STRETCH, 2, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "A");
    lv_obj_center(label);

    /*Cell B to 5;2 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[5], r_row_dsc[2]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 5, 1,
                         LV_GRID_ALIGN_STRETCH, 2, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "B");
    lv_obj_center(label);

    /*Cell C to 2;3 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[2], r_row_dsc[3]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 2, 1,
                         LV_GRID_ALIGN_STRETCH, 3, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "C");
    lv_obj_center(label);
    
    /*Cell D to 3;3 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[3], r_row_dsc[3]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 3, 1,
                         LV_GRID_ALIGN_STRETCH, 3, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "D");
    lv_obj_center(label);

    /*Cell E to 4;3 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[4], r_row_dsc[3]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 4, 1,
                         LV_GRID_ALIGN_STRETCH, 3, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "E");
    lv_obj_center(label);

    /*Cell F to 5;3 with width 1;1*/
    obj = lv_obj_create(r_cont);
    lv_obj_add_style(obj, &style_grid_outline, 0);
    lv_obj_set_size(obj, r_col_dsc[5], r_row_dsc[3]);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, 5, 1,
                         LV_GRID_ALIGN_STRETCH, 3, 1);
    label = lv_label_create(obj);
    lv_label_set_text(label, "F");
    lv_obj_center(label);

}

static void lv_tick_task(void *arg) {
    (void) arg;

    lv_tick_inc(LV_TICK_PERIOD_MS);
}