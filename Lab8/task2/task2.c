#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

int *scanDinArr(size_t * size){
    *size = 0;
    int *array;
    for (int i = 0;; ++i) {
        int scan;
        printf("Enter %d'th element:", i);
        scanf("%d", &scan);
        if(scan != 0) {
            array = increase(array, size);
            array[(*size - 1)] = scan;
        } else break;
    }
    return array;
}

int* increase(int *array, size_t *size){
    int *newArray = calloc(sizeof (int), *size + 1);
    if (newArray == NULL) exit(1);
    for (size_t i = 0; i < *size; ++i) {
        newArray[i] = array[i];
    }
    *size += 1;
    free(array);
    return newArray;
}