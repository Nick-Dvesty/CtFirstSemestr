#include <stdio.h>
#include "task1.h"

void startTask1(){
    int a, b;
    printf("Enter default value: ");
    scanf("%d %d",&a,&b);
    swap(&a, &b);
    printf("Value after swap: %1d %2d", a, b);
}

void swap(int* pa, int* pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}
