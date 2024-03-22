cmake_minimum_required(VERSION 3.27)
project(Lab3 C)

set(CMAKE_C_STANDARD 99)

add_executable(Lab3 main.c
        task1/task1.c
        task1/task1.h
        task2/task2.c
        task2/task2.h
        task3/task3.c
        task3/task3.h
        task4/task4.c
        task4/task4.h
        task5/task5.c
        task5/task5.h
        task6/task6.c
        task6/task6.h
        task7/task7.c
        task7/task7.h)
