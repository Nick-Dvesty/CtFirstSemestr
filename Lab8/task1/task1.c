#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int* scanArray(){
    size_t size;
    printf("Enter size array: ");
    scanf("%zu", &size);
    int *array = calloc(sizeof(int), size);
    if (array == NULL) exit(1);
    for (size_t i = 0; i < size; ++i) {
        printf("Enter %zu'th element: ", i);
        scanf("%d", &array[i]);
    }
    return array;
}