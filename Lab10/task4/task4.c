#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include <tgmath.h>
#include "task4.h"

void startTask4(){
    scanf("Enter value: ");

    int t = convert("-2147483648", 16, NULL);
    printf("%d", t);
}


int convert(char* str, int basSys, jmp_buf error){
    int answer = 0;
    int sign = 1;
    for (unsigned long i = 0; i < strlen(str); ++i) {
        if (i == 0 && str[i] == '-') sign = -1;
        else{
            int oldAns = answer;
            answer*= basSys;
            int number = recognition(str[i], basSys, error);
            if((oldAns * basSys + number)/ basSys != oldAns) {
                if (error == NULL){
                    exit(1);
                } else longjmp(error,1);
            }
            answer += number;
        }
    }
    answer *= sign;
    return answer;
}

int recognition(char number, int basSys, jmp_buf error) {
    if(number >= '0' && number <= '9'){
        if(number < basSys + '0') return number - '0';
    }
    if(number >= 'A' && number <= 'F'){
        if(number < basSys + 'A' - 10) return number - 'A' + 10;
    }
    if(number >= 'a' && number <= 'f'){
        if(number < basSys + 'a' - 10) return number - 'a' + 10;
    }
    if (error == NULL){
        exit(1);
    } else longjmp(error,1);
}
