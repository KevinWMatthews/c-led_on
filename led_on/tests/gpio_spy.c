#include "led.h"
#include "gpio_spy.h"

bool led_create(void)
{
    return true;
}

bool led_on(void)
{
    return true;
}

GPIO_STATE gpio_spy_get_state(void)
{
    return GPIO_HIGH;
}
