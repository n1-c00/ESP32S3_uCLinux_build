#include <stdio.h>
#include "freertos/freeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN 13

void app_main(void)
{
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT)
    while(1){
        
        gpio_set_level(LED_PIN, 1)
        vTaskdelay(pdMS_TO_TICKS(1000/2))
        gpio_set_level(LED_PIN, 0)
        vTaskdelay(pdMS_TO_TICKS(1000/2))
    }
}
