#pragma once
#include <stdlib.h>

void scanArr(int* array, size_t size);

void printArr(int* array, size_t size);

void revertArr(int* array, size_t size);

int maxlnArr(int* array, size_t size);

int*  findlnArr(int* array, size_t size, int findElem);

void  extractDigits(int* array, size_t size, int number);

int compareArrays(const int *arrayA, size_t sizeA, const int *arrayB, size_t sizeB);

void swap(int* pa, int* pb);
