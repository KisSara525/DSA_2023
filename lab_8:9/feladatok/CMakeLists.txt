cmake_minimum_required(VERSION 3.24)
project(feladatok C)

set(CMAKE_C_STANDARD 23)

add_executable(feladatok main.c sources/linked_list.c headers/linked_list.h)
include_directories()
