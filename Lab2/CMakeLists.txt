cmake_minimum_required(VERSION 3.27)
project(Lab2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Lab2 main.c
        task1/task1.h
        task1/task1.c
        task2/task2.h
        task2/task2.c
)
