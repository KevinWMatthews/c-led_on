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
    CHECK_TRUE( led_create() );
    // We're encoding an led -> gpio mapping here. Actually from the schematic?
    LONGS_EQUAL( GPIO_LOW, gpio_spy_get_state() );
}

TEST(led_on, turn_led_on)
{
    CHECK_TRUE( led_on() );
    LONGS_EQUAL( GPIO_HIGH, gpio_spy_get_state() );
}
