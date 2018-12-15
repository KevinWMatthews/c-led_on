#include "led.h"
#include "gpio.h"

bool led_create2(void)
{
    return gpio_output_init(GPIO_LOW);
}

bool led_on2(void)
{
    return gpio_set_state(GPIO_HIGH);
}

bool led_destroy2(void)
{
    return gpio_uninit();
}
