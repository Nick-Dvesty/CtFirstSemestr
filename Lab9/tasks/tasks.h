#pragma once

#include <stddef.h>

void concat(int *array1, size_t size1, int *array2, size_t size2, int **retArray, size_t *retSize);

int*  findSubArr(int *array1, size_t size1, int *array2, size_t size2);

void  removeSubArr(int *array1, size_t *size1, int *array2, size_t size2);