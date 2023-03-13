cmake_minimum_required(VERSION 3.24)
project(oria_feladatok C)

set(CMAKE_C_STANDARD 23)

add_executable(oria_feladatok main.c sources/stack.c headers/stack.h)
include_directories(headers)