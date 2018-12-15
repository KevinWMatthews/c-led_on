extern "C"
{
#include "led.h"
}
#include "CppUTest/TestHarness.h"

TEST_GROUP(led_on)
{
};

TEST(led_on, create_led)
{
    CHECK_TRUE( led_create() );
}
