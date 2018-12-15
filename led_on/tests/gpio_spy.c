#include "led.h"
#include "gpio_spy.h"

static GPIO_STATE gpio_state;

bool led_create(void)
{
    gpio_state = GPIO_LOW;
    return true;
}

bool gpio_output_init(GPIO_STATE initial_state)
{
    gpio_state = GPIO_LOW;
    return true;
}

bool led_on(void)
{
    gpio_state = GPIO_HIGH;
    return true;
}

bool led_destroy(void)
{
    gpio_state = GPIO_LOW;
    return true;
}

GPIO_STATE gpio_spy_get_state(void)
{
    return gpio_state;
}
