#include <stdio.h>
#include <assert.h>
#include "task6.h"

void startTask6(){
    unsigned long left, right;
    printf("Enter range of values(use space to separate parts)");
    scanf("%lu %lu", &left, &right);
    if(left < right){
        for (unsigned long i = left < 100000 ? 100000: left; i < right % 1000000; i++) {
            if(isHappyTicket(i)) printf("%d \n", i);
        }
    }
    else printf("ERROR: max value less than min value");

}

int isHappyTicket(unsigned long number){
    assert((number >= 100000) && (number < 1000000));
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < 6; i++) {
        if(i % 2 == 0) evenSum  += number % 10;
        else oddSum += number % 10;
        number /= 10;
    }
    if (evenSum == oddSum) return 1;
    return 0;
}