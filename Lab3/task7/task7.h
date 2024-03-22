#pragma once

#include <stddef.h>

typedef struct {
    int x;
    int y;
} vector;

void startTask7();

void printField(size_t size, vector pacman, vector eat);

int win(vector pacman, vector eat);

