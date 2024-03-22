cmake_minimum_required(VERSION 3.27)
project(Lab1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Lab1 main.c
        task1/task1.c
        task1/task1.h
        task2/task2.c
        task2/task2.h
)
