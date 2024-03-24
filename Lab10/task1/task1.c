#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"


void startTask1(){
    size_t size;
    printf("Enter size string: ");
    scanf("%zu", &size);
    char str[size];
    scanf("%s", str);
    if(strlen(str) > size){
        printf("ERROR: string overflow");
        exit(1);
    }
    int ans = palindrom(str);
    if (ans == 1) printf("number is palindrome");
    else printf("number isn't palindrome");
}

int palindrom(const char *str){
    size_t size = strlen(str);
    size_t left = 0, right = size - 1;
    while (left < right){
        if(str[left] == ' '){
            left++;
            continue;
        }
        if(str[right] == ' '){
            right--;
            continue;
        }
        if(str[left++] != str[right--]) return 0;
    }
    return 1;
}