cmake_minimum_required(VERSION 3.20)
project(Homework_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Homework_1
        main.cpp
        stats.cpp
        stats.h)
