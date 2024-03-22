#include "task3.h"
#include <stdio.h>
void startTask3(){
    unsigned int a,b;
    printf("Enter first number: ");
    scanf("%u", &a);
    printf("Enter second number: ");
    scanf("%u", &b);
    unsigned int answer = algoEuclid(a, b);
    printf("The smallest common divisor: %u", answer);
}

unsigned int algoEuclid(unsigned int a, unsigned int b){
    if (a != 0 && b != 0){
        unsigned int answer = algoEuclid(b, a % b);
    return  answer;
    } else return a;
}
