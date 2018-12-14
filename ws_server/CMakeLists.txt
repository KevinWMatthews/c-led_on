cmake_minimum_required(VERSION 3.5.1)

project(echo_server VERSION 1.0.0)
enable_language(C)

#TODO create CMake Findlibwebsock module
add_executable(ws_echo ws_echo.c)
target_link_libraries(ws_echo websock)
