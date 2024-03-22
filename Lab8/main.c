#include <malloc.h>
#include "task1/task1.h"
#include "task2/task2.h"
#include "tasksFromLab6/tasksFromLab6.h"

void test1(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int *array = calloc(sizeof (int), size);
    if (array == NULL) exit(1);
    scanArr(array, size);
    printArr(array, size);
    free(array);
}

void test2(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int *array = calloc(sizeof (int), size);
    if (array == NULL) exit(1);
    scanArr(array, size);
    revertArr(array, size);
    printArr(array, size);
    free(array);
}

void test3(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int *array = calloc(sizeof (int), size);
    if (array == NULL) exit(1);
    scanArr(array, size);
    printf("Maximum element: %d", maxlnArr(array, size));
    free(array);
}

void test4(){
    size_t size;
    int valueFindElem;
    printf("Enter size array: ");
    scanf("%zu", &size);
    printf("Enter find element: ");
    scanf("%d", &valueFindElem);
    int *array = calloc(sizeof (int), size);
    if (array == NULL) exit(1);
    scanArr(array, size);
    printf("address find elem: %p", findlnArr(array, size, valueFindElem));
    free(array);
}

void test5(){
    size_t size;
    int number;
    printf("Enter size array: ");
    scanf("%zu", &size);
    printf("Enter number: ");
    scanf("%d", &number);
    int *array = calloc(sizeof (int), size);
    if (array == NULL) exit(1);
    scanArr(array, size);
    extractDigits(array, size, number);
    printArr(array, size);
    free(array);
}

void test6(){
    size_t size1;
    printf("Enter size first array: ");
    scanf("%zu", &size1);
    int *array1 = calloc(sizeof (int), size1);
    if (array1 == NULL) exit(1);
    scanArr(array1, size1);

    size_t size2;
    printf("Enter size second array: ");
    scanf("%zu", &size2);
    int *array2 = calloc(sizeof (int), size2);
    if (array2 == NULL) exit(1);
    scanArr(array2, size2);

    printf("%d", compareArrays(array1, size1, array2, size2));
    free(array1);
    free(array2);
}

int main() {
    size_t size;
    int* test = scanDinArr(&size);
    printArr(test, size);
    free(test);
}
