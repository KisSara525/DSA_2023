cmake_minimum_required(VERSION 3.23)
project(oriafeladatok C)

set(CMAKE_C_STANDARD 23)

add_executable(oriafeladatok main.c sources/functions.c headers/functions.h headers/constans.h)
include_directories(headers)