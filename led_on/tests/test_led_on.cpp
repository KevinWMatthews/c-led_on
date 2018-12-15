extern "C"
{
#include "led.h"
#include "gpio_spy.h"
}
#include "CppUTest/TestHarness.h"

TEST_GROUP(led_on)
{
};

TEST(led_on, led_off_after_create)
{
    CHECK_TRUE( led_create2() );
    LONGS_EQUAL( GPIO_LOW, gpio_spy_get_state() );
}

TEST(led_on, turn_led_on)
{
    led_create2();
    CHECK_TRUE( led_on2() );
    LONGS_EQUAL( GPIO_HIGH, gpio_spy_get_state() );
}

TEST(led_on, led_off_after_destroy)
{
    led_create();
    led_on();
    CHECK_TRUE( led_destroy() );
    LONGS_EQUAL( GPIO_LOW, gpio_spy_get_state() );
}
