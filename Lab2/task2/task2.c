#include <stdio.h>
#include "task2.h"
void startTask2(){
    unsigned short year = 0;
    printf("Enter year: ");
    scanf("%hu", &year);
    if (year % 400 ==0) printf("this year is leap");
    else if (year % 100 == 0) printf("this year isn't leap");
    else if (year % 4 == 0) printf("this year is leap");
    else printf("this year isn't leap");
}

