#include <stdio.h>
#include <assert.h>
#include "task1.h"

void startTask1(){
    unsigned long long number = 0;
    printf("Enter upper limit: ");
    scanf("%llu", &number);
    if (number >= 2){
        for (unsigned long long i = 2; i < number; ++i) {
            unsigned int answer = isSimpleNumber(i);
            if (answer != 0) printf("%llu ", i);
        }
    } else {
        printf("ERROR: not correct number");
    }
}

int isSimpleNumber(unsigned long long number){
    assert(number >= 2);
    for (unsigned long long i = 2 ; i <= number/2; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
};