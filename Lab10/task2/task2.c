#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

void startTask2(){
    char *str = "   Tes  ts     \0";
    char* ans = trim(str);
    printf("New string: %s", ans);
    free(ans);
}

char* trim(const char* str){
    size_t size = strlen(str);
    size_t start = 0;
    size_t end = size - 1;
    for (size_t i = 0; i < size; ++i) {
        if (str[i] != ' ') break;
        start++;
    }
    for (size_t i = end; i > 0; --i) {
        if (str[i] != ' ') break;
        end--;
    }
    char *ans = calloc(sizeof(char), end - start + 2);
    if(ans == NULL) exit(1);
    for (size_t i = 0; i <= end - start; ++i) {
        ans[i] = str[start + i];
    }
    ans[end + 1] = '\0';
    return ans;
}