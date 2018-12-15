enable_language(C)
add_library(led
    "${CMAKE_HOME_DIRECTORY}/include/led.h"
    led.c
    gpio.c
)
#led.c
target_include_directories(led
    PUBLIC
        "${CMAKE_HOME_DIRECTORY}/include/"
)
target_compile_options(led
    PRIVATE "-Wall"
)
add_library(led::led ALIAS led)
