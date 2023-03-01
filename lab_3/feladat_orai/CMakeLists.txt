cmake_minimum_required(VERSION 3.23)
project(feladat_orai C)

set(CMAKE_C_STANDARD 23)

add_executable(feladat_orai main.c sources/functions.c headers/functions.h headers/constans.h)
include_directories(headers)
