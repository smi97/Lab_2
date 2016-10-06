cmake_minimum_required(VERSION 3.0.2)	

project(hello_world)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/ /Tests/)

add_library(hello_world STATIC ${CMAKE_CURRENT_SOURCE_DIR}/include/print_hello_world.h Tests/main.cpp)

add_executable(Examples ${CMAKE_CURRENT_SOURCE_DIR} examples/main.cpp)

add_executable(Tests ${TESTS_SOURCE} Tests/print_hello_world.cpp Tests/main.cpp)
