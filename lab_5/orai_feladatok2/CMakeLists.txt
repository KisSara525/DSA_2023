cmake_minimum_required(VERSION 3.24)
project(orai_feladatok2 C)

set(CMAKE_C_STANDARD 23)

add_executable(orai_feladatok2 main.c sources/queue.c headers/queue.h)
include_directories(headers)