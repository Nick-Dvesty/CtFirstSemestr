#include <stdio.h>
#include <assert.h>
#include "task5.h"

void startTask5(){
    unsigned long long number = 0;
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