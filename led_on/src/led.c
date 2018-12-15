#include "led.h"
#include "gpio.h"

bool led_create2(void)
{
    return gpio_output_init(GPIO_LOW);
}
