extern "C"
{
#include "led.h"
#include "gpio_spy.h"
}
#include "CppUTest/TestHarness.h"

TEST_GROUP(led_on)
{
};

TEST(led_on, create_led)
{
    CHECK_TRUE( led_create() );
}

TEST(led_on, turn_led_on)
{
    CHECK_TRUE( led_on() );
    LONGS_EQUAL( GPIO_HIGH, gpio_spy_get_state() );
}
