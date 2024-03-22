cmake_minimum_required(VERSION 3.27)
project(Lab8 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab8 main.c
        tasksFromLab6/tasksFromLab6.c
        tasksFromLab6/tasksFromLab6.h
        task1/task1.c
        task1/task1.h
        task2/task2.c
        task2/task2.h)
