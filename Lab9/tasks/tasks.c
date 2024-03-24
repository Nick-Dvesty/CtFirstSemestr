#include "tasks.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

//№1
void concat(int *array1, size_t size1, int *array2, size_t size2, int **retArray, size_t *retSize){
    assert(array1 != NULL && array2 != NULL && retArray != NULL && retSize != NULL);
    *retSize = size1 + size2;
    int *ansArray = calloc(sizeof(int), *retSize);
    for (int i = 0; i < size1; ++i) {
        ansArray[i] = array1[i];
    }
    for (int i = 0; i < size2; ++i) {
        ansArray[size1+ i] = array2[i];
    }
    *retArray = ansArray;
}
//№2
int*  findSubArr(int *array1, size_t size1, int *array2, size_t size2){
    assert(array1 != NULL && array2 != NULL);
    for (int i = 0; i < size1 - size2 + 1; ++i) {
        if(array1[i] == array2[0]){
            for (int j = 0; j < size2; ++j) {
                if(array1[i+j] != array2[j]) break;
                if(j == size2 - 1)return &array1[i];
            }
        }
    }
    return NULL;
}
//№3
void  removeSubArr(int *array1, size_t *size1, int *array2, size_t size2){
    assert(array1 != NULL && size1 != NULL && array2 != NULL);
    while (1){
        int* sub = findSubArr(array1, *size1, array2, size2);
        if(sub!=NULL){
            for (int i = (int)(sub - array1); i < *size1 - size2; ++i) {
                array1[i] = array1[(i+ size2)];
            }
            *size1 -=size2;
        } else break;
    }
}
//№4

int **createPascal(size_t size){
    int **trunk = calloc(sizeof (int*), size);
    for (int i = 0; i < size; ++i) {
        int *sheet = calloc(sizeof(int), i + 1);
        trunk[i] = sheet;
    }
    return trunk;
}

void binodalPascal(int** arrPascal, size_t size){
    assert(arrPascal != NULL);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i+1; ++j) {
            if(j == 0 || j == i) arrPascal[i][j] = 1;
            else{
                arrPascal[i][j] = arrPascal[i - 1][j - 1] + arrPascal[i - 1][j];
            }
        }
    }
}

void printPascal(int** arrPascal, size_t size){
    assert(arrPascal != NULL);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i+1; ++j) {
            printf("%d ", arrPascal[i][j]);
        }
        printf("\n");
    }
}

//№5

void scanDinArr(int **array, size_t *size, size_t* capacity){
    assert(array != NULL && size != NULL && capacity != NULL);
    *size = 0;
    *capacity = 1;
    int *ansArr[1];
    *ansArr = calloc(sizeof(int), 1);
    for (int i = 0;; ++i) {
        int scan;
        printf("Enter %d'th element:", i);
        scanf("%d", &scan);
        if(scan != 0) {
            if (capacity == size) {
                int* buferArr = realloc(*ansArr, *capacity+1);
                if (buferArr != NULL) {
                    *ansArr = buferArr;
                    (*capacity)++;
                }
                else  increase(array, size, capacity);
            }
            (*ansArr)[i] = scan;
            (*size)++;
        } else break;
    }
    *array = *ansArr;
}

void increase(int **array, size_t *size, size_t* capacity){
    assert(array != NULL && size != NULL && capacity != NULL);
    int *newArray = calloc(sizeof (int), *size + 1);
    if (newArray == NULL) exit(1);
    for (size_t i = 0; i < *size; ++i) {
        newArray[i] = (*array)[i];
    }
    free(*array);
    (*capacity)++;
    *array = newArray;
}