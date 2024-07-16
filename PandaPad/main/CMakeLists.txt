idf_component_register(SRCS "main.c" "led.c" "keypad.c" "display.c"
                    INCLUDE_DIRS "."
                    REQUIRES lvgl_esp32_drivers esp_timer)
