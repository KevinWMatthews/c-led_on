#include "led.h"
#include "gpio_spy.h"

static GPIO_STATE gpio_state;

bool led_create(void)
{
    gpio_state = GPIO_LOW;
    return true;
}

bool led_on(void)
{
    return true;
}

GPIO_STATE gpio_spy_get_state(void)
{
    return gpio_state;
}
