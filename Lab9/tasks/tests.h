#pragma once
#include "tasks.h"
#include <stdio.h>
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
