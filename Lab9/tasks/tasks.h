#pragma once

#include <stddef.h>

void concat(int *array1, size_t size1, int *array2, size_t size2, int **retArray, size_t *retSize);

int*  findSubArr(int *array1, size_t size1, int *array2, size_t size2);

void  removeSubArr(int *array1, size_t *size1, int *array2, size_t size2);

int **createPascal(size_t size);
void binodalPascal(int** arrPascal, size_t size);
void printPascal(int** arrPascal, size_t size);

void scanDinArr(int **array, size_t *size, size_t* capacity);
void increase(int **array, size_t *size, size_t* capacity);

