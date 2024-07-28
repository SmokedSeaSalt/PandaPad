idf_component_register(SRCS 
                            "main.c" 
                            "led.c" 
                            "keypad.c" 
                            "display.c"
                            "fipps_4"
                            "fipps_8"
                            "fipps_16"
                            "pixel_bit_advanced_4"
                            "pixel_bit_advanced_8"
                            "pixel_bit_advanced_16"

                    INCLUDE_DIRS "."
                    REQUIRES lvgl_esp32_drivers esp_timer)
