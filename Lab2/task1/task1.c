#include <stdio.h>
#include "task1.h"

int number1;
int number2;

void startTask1(){
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);

        printf("sum: %d \n",  number1 + number2);
        printf("sub: %d \n",  number1 - number2);
        printf("multiplication: %d \n",  number1 * number2);
        if(number2 != 0) printf("division: %d \n",  number1 / number2);
        else printf("division by zero is not allowed");
        printf("remainder of the division: %d \n",  number1 % number2);

        printf("equality %d \n",  number1 == number2);
        printf("not equal: %d \n",  number1 != number2);
        printf("greater or equal: %d \n",  number1 >= number2);
        printf("greater: %d \n",  number1 > number2);
        printf("less or equal: %d \n",  number1 <= number2);
        printf("less: %d \n",  number1 < number2);

        printf("logic conjunction: %d \n",  number1 && number2);
        printf("logic disjunction: %d \n",  number1 || number2);

        printf("shift left: %d \n",  number1 << number2);
        printf("shift right: %d \n",  number1 >> number2);
        printf("bit or: %d \n",  number1 | number2);
        printf("bit and: %d \n",  number1 & number2);
        printf("bit xor: %d \n",  number1 ^ number2);
}
