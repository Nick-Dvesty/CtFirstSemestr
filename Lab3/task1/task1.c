#include <stdio.h>
#include "task1.h"

void startTask1(){
    unsigned long lastNumber = 0;
    printf("Enter positive number: ");
    scanf("%lu", &lastNumber);
    printNumbers( lastNumber);
}

void printNumbers(unsigned long  lastNumber){
    for (unsigned long  i = 0; i <= lastNumber; i++) {
        if (i % 3 == 0) printf("fizz ");
        if (i % 5 == 0) printf("buzz ");
        if (i % 3 != 0 && i % 5 != 0) printf("%d ", i);
    }
}