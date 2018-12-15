#include "led.h"
#include "gpio.h"

bool led_create(void)
{
    return gpio_output_init(GPIO_LOW);
}

bool led_on(void)
{
    return gpio_set_state(GPIO_HIGH);
}

bool led_destroy(void)
{
    return gpio_uninit();
}
