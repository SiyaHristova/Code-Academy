/* Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */
#include <stdlib.h>
#include <stdio.h>

const int giMaxSize1 = 5;
const int giMaxSize2 = 5;
const int giLowLimit = 1;
const int giHighLimit = 5;
int arrRand[5][5] = {0};

void fvInput(){
    int i, j;
    const int upperRand = 10;
    const int lowerRand = 0;
    for(i = 0; i< giMaxSize1; i++){
        for(j = 0; j < giMaxSize2; j++){
            arrRand[i][j] = rand()%(upperRand - lowerRand + 1) + lowerRand;
        }
    }
}
void fvCheck(){
    printf("Elements Between %i - %i:\n\n", giLowLimit, giHighLimit);
    for(int i = 0; i<giMaxSize1; i++){
        for(int j = 0; j<giMaxSize2; j++){
            if(arrRand[i][j] > 0 && arrRand[i][j]<6){
                printf("arrRand[%d][%d]: %d\n", i, j, arrRand[i][j]);
            }
        }
    }
}

int main(void){
    fvInput();
    fvCheck();
    return 0;
}


