cmake_minimum_required(VERSION 3.27)
project(Lab4 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab4 main.c
        task1/task1.c
        task1/task1.h
        task2/task2.c
        task2/task2.h
        task3/task3.c
        task3/task3.h
)
