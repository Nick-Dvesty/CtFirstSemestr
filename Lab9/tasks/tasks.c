#include "tasks.h"
#include <stdlib.h>

void concat(int *array1, size_t size1, int *array2, size_t size2, int **retArray, size_t *retSize){
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

int*  findSubArr(int *array1, size_t size1, int *array2, size_t size2){
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

void  removeSubArr(int *array1, size_t *size1, int *array2, size_t size2){
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


