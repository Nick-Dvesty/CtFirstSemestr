#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "task3.h"

void startTask3(){
    char* test = "      v re 4 53 756 86  34\000";
    char** ans[1];
    size_t size[1];
    size_t copacity[1];
    split(test, ans, size, copacity);
    for (int i = 0; i < *size; ++i) {
        printf("%s \n", (*ans)[i]);
    }
    for (int i = 0; i < *copacity; ++i) {
        free((*ans)[i]);
    }
    free(*ans);
}

void split(const char* str, char *** retAnswer, size_t *size, size_t *copacity){
    char **ansStr[1]; //= malloc(sizeof(char**));
    char **first = malloc(sizeof(char*));
    *ansStr= first;
    *size = 0;
    *copacity = 1;
    int start_word = 0;
    for (int i = 1; i <= strlen(str); ++i) {
        if(str[i-1] == ' '  && str[i]!= ' ') start_word = i;
        if((str[i] == ' '  && str[i - 1]!= ' ') || i == strlen(str)){
            char *word = calloc(sizeof(char *), i - start_word+ 1);
            for (int j = 0; j < i - start_word; ++j) {
                word[j] = str[j + start_word];
            }
            word[i - start_word] = '\000';
            (*ansStr)[*size] = word;
            (*size)++;
            if(*size == *copacity) increase(ansStr, size, copacity);
        }
    }
    *retAnswer = *ansStr;
}

void increase(char ***array, size_t *size, size_t* capacity){
    assert(array != NULL && size != NULL && capacity != NULL);
    char **newArray = calloc(sizeof (char*), *size + 1);
    if (newArray == NULL) exit(1);
    for (size_t i = 0; i < *size; ++i) {
        newArray[i] = (*array)[i];
    }
    free(*array);
    *array = newArray;
    (*capacity)++;
}