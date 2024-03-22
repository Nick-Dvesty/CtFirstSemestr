#include "task7.h"
#include <stdio.h>
#include <stdlib.h>

void startTask7(){
    int result = 0;
    size_t size;
    vector pacman, eat;
    printf("Enter size game's field");
    scanf("%zu", &size);
    pacman.x = 0;
    pacman.y = 0;
    eat.x = size - 1;
    eat.y=  size - 1;

    while (!win(pacman,eat)){
        printField(size,pacman,eat);
        int command = 0;
        scanf("%d",&command);
        switch (command) {
            case 4:{
                if(pacman.x != 0) pacman.x--;
                break;
            }
            case 8:{
                if(pacman.y != 0) pacman.y--;
                break;
            }
            case 6:{
                if(pacman.x != size-1) pacman.x++;
                break;
            }
            case 5:{
                if(pacman.y != size -1) pacman.y++;
                break;
            }
            default:{
                printf("Error char");
                exit(1);
            }
        }
        result++;
    }
    printf("Your result: %d", result);

}

void printField(size_t size, vector pacman, vector eat){
    for (unsigned long  i = 0; i < size; i++) {
        for (unsigned long  j = 0; j < size; j++) {
            if(pacman.x == j && pacman.y== i) printf("P ");
            else if(eat.x == j && eat.y == i) printf("E ");
            else printf( "o ");
        }
        printf("\n");
    }
}

int win(vector pacman, vector eat){
    if(pacman.x == eat.x && pacman.y == eat.y) return 1;
    else return 0;
}