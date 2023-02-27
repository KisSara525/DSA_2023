cmake_minimum_required(VERSION 3.23)
project(feladatok C)

set(CMAKE_C_STANDARD 23)

add_executable(feladatok main.c source/functions.c header/functions.h header/constants.h)
include_directories(header)