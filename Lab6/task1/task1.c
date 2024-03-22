#include <stdio.h>
#include <assert.h>
#include "task1.h"

void scanArr(int* array, size_t size){
    assert(array != NULL);
    for (int i = 0; i < size; ++i) {
        printf("Enter %d'th element array: ", i);
        scanf("%d", &array[i]);
    }
}

void printArr(int* array, size_t size){
    assert(array != NULL);
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void revertArr(int* array, size_t size){
    assert(array != NULL);
    for (int i = 0; i <= (size - i - 1); ++i) {
        swap(&array[i], &array[size - i -1]);
    }
}

int maxlnArr(int* array, size_t size){
    assert(array != NULL);
    int max = 0;
    for (int i = 0; i < size; ++i) {
        if (max < array[i]) max = array[i];
    }
    return max;
}

int*  findlnArr(int* array, size_t size, int findElem){
    assert(array != NULL);
    for (int i = 0; i < size; ++i) {
        if (array[i] == findElem) return &array[i];
    }
    return NULL;
}

void  extractDigits(int* array, size_t size, int number){
    assert(array != NULL);
    assert(size >= 10);
    int sizeNumber = 0;
    int digits[10];
    for (int i = 0; i <10; ++i) {
        if (number != 0){
            digits[i] = number % 10;
            number /= 10;
            sizeNumber++;
        } else{
            break;
        }
    }
    for (int i = 0; i < sizeNumber; ++i) {
        array[i] = digits[sizeNumber - i - 1];
    }
}
int compareArrays(const int *arrayA, size_t sizeA, const int *arrayB, size_t sizeB){
    assert(arrayA != NULL);
    assert(arrayB != NULL);
    size_t minSize = sizeA > sizeB ? sizeB : sizeA;
    for (int i = 0; i < minSize; ++i) {
        if(arrayA[i] > arrayB[i]) return 1;
        if(arrayB[i] > arrayA[i]) return -1;
    }
    if (minSize < sizeA) return 1;
    if (minSize < sizeB) return -1;
    return 0;
}

void swap(int* pa, int* pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}
