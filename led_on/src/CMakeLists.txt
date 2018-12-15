enable_language(C)
add_library(led
    "${CMAKE_HOME_DIRECTORY}/include/led.h"
    led.c
)
#led.c
target_include_directories(led
    PUBLIC
        "${CMAKE_HOME_DIRECTORY}/include/"
)
add_library(led::led ALIAS led)
