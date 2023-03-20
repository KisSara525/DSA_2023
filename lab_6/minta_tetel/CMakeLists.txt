cmake_minimum_required(VERSION 3.24)
project(minta_tetel C)

set(CMAKE_C_STANDARD 23)

add_executable(minta_tetel main.c sources/patient.c headers/patient.h sources/medicalcenter.c headers/medicalcenter.h)
include_directories(headers)