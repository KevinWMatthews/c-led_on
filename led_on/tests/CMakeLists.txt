enable_language(CXX)

add_executable(test_led_on
    run_all_tests.cpp
    test_led_on.cpp
)
target_link_libraries(test_led_on
    PRIVATE CppUTest
)
target_compile_options(test_led_on
    PRIVATE "-Wall"
)
add_test(
    NAME test_led_on
    COMMAND test_led_on
)
