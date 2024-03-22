#include <stdio.h>
#include "task3.h"

void startTask3(){
    int a, b, c;
    printf("Enter original values: ");
    scanf("%d %d %d", &a, &b, &c);
    evilScanf(&a, &b, &c);
    printf("New values: %1d, %2d, %3d", a,b,c);
}

void evilScanf(int *p0, int *p1, int *p2){
    int n0,n1,n2;
    printf("Enter values n0, n1, n2: ");
    scanf("%d %d %d", &n0, &n1, &n2);
    if (n0 > 0){
        *p1 = n1;
        *p2 = n2;
    } else {
        *p1 = *p0;
        *p2 = n0 * n1 * n2 * *p1 * *p2;
    }
    *p0 = n0;
}