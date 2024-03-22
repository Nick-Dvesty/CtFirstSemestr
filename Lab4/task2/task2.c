#include "task2.h"
#include <stdio.h>

void startTask2(){
    int number;
    printf("Enter number: ");
    scanf("%u", &number);
    unsigned int answer =  findDiv(number);
    printf("Count dividers: %u", answer);
}

unsigned int findDiv(unsigned int number){
    unsigned int countDiv = 0;
    for (unsigned int i = 1; i * i <= number; ++i) {
        if(i * i == number) countDiv++;
        else if(number % i == 0){
            countDiv+=2;
        }
    }
    return countDiv;
}