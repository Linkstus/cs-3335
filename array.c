#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    char array[5][5];

    srand(time(0));

    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            array[i][j] = '*';
            printf("\t");
        }
        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%c ", array[i][j]);
            if(j == 4) {
                printf("\n");
            }
        }
    }

    return 0;

}