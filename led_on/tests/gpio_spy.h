#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

typedef enum
{
    GPIO_HIGH   = 1,
} GPIO_STATE;
GPIO_STATE gpio_spy_get_state(void);

#endif
