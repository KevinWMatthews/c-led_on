#include "led.h"
#include "gpio_spy.h"

static GPIO_STATE gpio_state;

bool gpio_create_output(GPIO_STATE initial_state)
{
    gpio_state = GPIO_LOW;
    return true;
}

bool gpio_set_state(GPIO_STATE new_state)
{
    gpio_state = new_state;
    return true;
}

bool gpio_destroy(void)
{
    gpio_state = GPIO_LOW;
    return true;
}

GPIO_STATE gpio_spy_get_state(void)
{
    return gpio_state;
}
