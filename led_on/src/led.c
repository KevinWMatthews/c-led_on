#include "led.h"
#include "gpio.h"

bool led_create(void)
{
    return gpio_create_output(GPIO_LOW);
}

bool led_on(void)
{
    return gpio_set_state(GPIO_HIGH);
}

bool led_destroy(void)
{
    return gpio_destroy();
}
