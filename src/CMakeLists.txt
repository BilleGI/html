cmake_minimum_required(VERSION 3.22)

add_executable(html_editor main.cpp ${MY_INCLUDE_DIR}/html.h html.cpp)

target_include_directories(html_editor PRIVATE ${MY_INCLUDE_DIR})
