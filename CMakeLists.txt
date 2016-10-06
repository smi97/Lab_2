cmake_minimum_required(VERSION 3.0.2)	

project(hello_world)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}<print_hello_world.h> /tests/)

add_library(hello_world STATIC ${CMAKE_CURRENT_SOURCE_DIR}/source/print_hello_world.cpp tests/main.cpp)

add_executable(Examples ${CMAKE_CURRENT_SOURCE_DIR} examples/main.cpp)
add_executable(Tests ${TESTS_SOURCE} tests/print_hello_world.cpp tests/main.cpp)