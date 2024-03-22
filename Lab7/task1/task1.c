#include "task1.h"
#include <stdio.h>

void transpose(int matrix[4][4]){
    for (int i = 0; i < 4; ++i) {
        for (int j = i+1; j < 4; ++j) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }
}

void swap(int *pa, int *pb){
    *pa = *pa ^ *pb;
    *pb = *pa ^ *pb;
    *pa = *pa ^ *pb;
}

void printMatrix(int matrix[4][4]){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}