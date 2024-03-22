#include "task1/task1.h"
#include <stdio.h>

int main() {
    int test[4][4] = {1,2,3,4,
                      5,6,7,8,
                      9,10, 11,12,
                      13,14,15,16};
    printMatrix(test);
    transpose(test);
    printMatrix(test);
}

