#include <stdio.h>
#include "task2.h"

void startTask2(){
    unsigned long lastNumber = 0;
    printf("Enter positive number: ");
    scanf("%lu", &lastNumber);
    printNumbersSquare(lastNumber);
}

void printNumbersSquare(unsigned long  lastNumber){
    for (unsigned long  i = 0; i < lastNumber - 1; i++) {
        for (unsigned long  j = 0; j < lastNumber; j++) {
            printf("%d ", i * lastNumber + j);
        }
        printf("\n");
    }
}