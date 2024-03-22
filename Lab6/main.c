#include <stdio.h>
#include "task1/task1.h"
void test1(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int array[size];
    scanArr(array, size);
    printArr(array, size);
}

void test2(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int array[size];
    scanArr(array, size);
    revertArr(array, size);
    printArr(array, size);
}

void test3(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int array[size];
    scanArr(array, size);
    printf("Maximum element: %d", maxlnArr(array, size));
}

void test4(){
    size_t size;
    int valueFindElem;
    printf("Enter size array: ");
    scanf("%zu", &size);
    printf("Enter find element: ");
    scanf("%d", &valueFindElem);
    int array[size];
    scanArr(array, size);
    printf("address find elem: %p", findlnArr(array, size, valueFindElem));
}

void test5(){
    size_t size;
    int number;
    printf("Enter size array: ");
    scanf("%zu", &size);
    printf("Enter number: ");
    scanf("%d", &number);
    int array[size];
    scanArr(array, size);
    extractDigits(array, size, number);
    printArr(array, size);
}

void test6(){
    size_t size1;
    printf("Enter size first array: ");
    scanf("%zu", &size1);
    int array1[size1];
    scanArr(array1, size1);

    size_t size2;
    printf("Enter size second array: ");
    scanf("%zu", &size2);
    int array2[size2];
    scanArr(array2, size2);

    printf("%d", compareArrays(array1, size1, array2, size2));
}

int main() {
    test6();
}
