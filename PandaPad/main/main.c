#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_err.h"
#include "sdkconfig.h"

//include ESP-IDF components
#include "led_strip.h"
#include "iot_button.h"
#include "tinyusb.h"
#include "class/hid/hid_device.h"

//include local sources
#include "led.h"
#include "keypad.h"
#include "cirque_pinnacle.h"
#include "usb_hid.h"


/* PandaPad key positions

-----------------------------
| 0 | 1 |                   |
---------   E-ink screen    -
| 2 | 3 |                   |
-----------------------------
|           | 4 | 5 | 6 | 7 |
-           -----------------
| Touchpad  | 8 | 9 | A | B |
-           -----------------
|           | C | D | E | F |
-----------------------------
*/

extern bool touchpad_init;

void app_main(void)
{
    pinnacle_data_t touch_results = {0};
    gpio_set_direction(17, GPIO_MODE_OUTPUT);
    gpio_set_level(17, 1);
    vTaskDelay(100);

    init_led();
    turn_on_backlight(2);
    turn_on_backlight(3);

    initialize_keypad();

    cirque_pinnacle_init();

    usb_hid_init();

    while(1){
        vTaskDelay(10);
        touch_results = cirque_pinnacle_read_data();
        //ESP_LOGI("Touch_Data", "Tmain, touchpad_init = %d", touchpad_init);
        tud_hid_mouse_report(HID_ITF_PROTOCOL_MOUSE, 0x00, touch_results.yDelta, (touch_results.xDelta * -1), 0, 0);
        //ESP_LOGI("Touch_Data", "Data_ready= %d, X= %d, Y= %d", touch_results.valid , touch_results.xDelta, touch_results.yDelta);
    }
}
