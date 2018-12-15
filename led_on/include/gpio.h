#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

#include <stdbool.h>

typedef enum
{
    GPIO_LOW    = 0,
    GPIO_HIGH   = 1,
} GPIO_STATE;
bool gpio_output_init(GPIO_STATE initial_state);
bool gpio_set_state(GPIO_STATE new_state);
bool gpio_uninit(void);

#endif
