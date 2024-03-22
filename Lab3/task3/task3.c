#include <stdio.h>
#include "task3.h"

void startTask3(){
    unsigned long lastNumber = 0;
    printf("Enter positive number: ");
    scanf("%lu", &lastNumber);
    printNumbersTriangle(lastNumber);
}

void printNumbersTriangle(unsigned long lastNumber){
    unsigned long number = 0;
    for (unsigned long  i = 0; i < lastNumber; i++) {
        for (unsigned long  j = 0; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}
