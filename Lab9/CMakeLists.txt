cmake_minimum_required(VERSION 3.27)
project(Lab9 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab9 main.c
        tasks/tasks.c
        tasks/tasks.h
        tasks/tests.h)
