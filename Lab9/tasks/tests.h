#pragma once
#include "tasks.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <stdlib.h>


int* scanArr(size_t *size){
    assert(size != NULL);
    printf("Enter size array: ");
    scanf("%zu", size);
    int* array = calloc(sizeof(int), *size);
    if (array == NULL) exit(1);
    for (int i = 0; i < *size; ++i) {
        printf("Enter %d'th element array: ", i);
        scanf("%d", &array[i]);
    }
    return array;
}

void printArr(int* array, size_t size){
    assert(array != NULL);
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void concatTest(){
    int test1[5] = {1,2,3,4,5};
    int test2[5] = {6,7,8,9,10};
    int** ans;
    size_t ansSize;
    concat(test1,5,test2, 5, ans,&ansSize);
    for (int i = 0; i < ansSize; ++i) {
        printf("%d ", (*ans)[i]);
    }
}

void findSubArrTest(){
    int test1[5] = {1,2,3,4,5};
    int test2[2] = {4,5};
    int *ans = findSubArr(test1,5,test2, 2);
    printf("%d ", (*ans));
}

void remoteSubArrTest(){
    int test1[5] = {1,2,3,4,5};
    size_t size = 5;
    int test2[2] = {2,3};
    removeSubArr(test1,&size,test2, 2);
    for (int i = 0; i < size; ++i) {
        printf("%d ", test1[i]);
    }
}

void pascalTest(){
    size_t size = 8;
    int **array = createPascal(size);
    binodalPascal(array, size);
    printPascal(array, size);
}

void dinArrTest(){
    size_t size[1];
    size_t capacity[1];
    int* array[1];
    scanDinArr(array, size, capacity);
    for (int i = 0; i < *size; ++i) {
        printf("%d ", (*array)[i]);
    }
}
