/* Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F  */
#include <stdio.h>
#include <stdlib.h>
 
void menu();
void printer();
 
int main(void){
 
    menu();
 
    return 0;
}
 
void menu(){
    int dir = 0, newI = 0, newJ = 0, i = 0, j = 0, oldI = 0, oldJ = 0;
    int size = 7;
 
    int arr[7][7] = {{3, 3, 2, 4, 3, 1, 2},
                    {2, 4, 2, 3, 2, 4, 3},
                    {4, 2, 3, 2, 4, 2, 1},
                    {4, 4, 1, 2, 2, 3, 4},
                    {3, 2, 3, 3, 4, 2, 2},
                    {3, 2, 4, 2, 3, 2, 1},
                    {1, 1, 3, 3, 4, 2, 0}};
 
    for (i = 0; i < 7; i++){
        printf("\n");
        for (j = 0; j < 7; j++){
 
            if(newI == i && newJ == j){
                printf("X ");
            }else if (i == 6 && j == 6){
                printf("F");
            }else{
                printf("%d ", arr[i][j]);
            }
        }
    }
    while (dir < 6){
 
        printf("\nChoose direction to go(1 - right, 2 - down, 3 - left, 4 - up, 5 - reset)? ");
        scanf("%d", &dir);
 
        switch (dir){
        case 1:
            if ((newI < 7 && newJ < 7) && (newJ > -1 && newI > -1)){
                oldJ = newJ;
                newJ += arr[newI][newJ];
            }else if (newJ < 0){
                newJ = 0;
            }else if (newI < 0){
                newI = 0;
            }else
                printf("\nSorry you are out of the array!Try again\n");
            break;
 
        case 2:
            if ((newI < 7 && newJ < 7) && (newJ > -1 && newI > -1)){
                oldI = newI;
                newI += arr[newI][newJ];
            }else if (newJ < 0){
                newJ = 0;
            }else if (newI < 0){
                newI = 0;
            }else
                printf("\nSorry you are out of the array!Try again\n");
            break;
 
        case 3:
            if ((newI < 7 && newJ < 7) && (newJ > -1 && newI > -1)){
                oldJ = newJ;
                newJ -= arr[newI][newJ];
            }else if (newJ < 0){
                newJ = 0;
            }else if (newI < 0){
                newI = 0;
            }else
                printf("\nSorry you are out of the array!Try again\n");
            break;
        case 4:
            if ((newI < 7 && newJ < 7) && (newJ > -1 && newI > -1)){
                oldI = newI;
                newI -= arr[newI][newJ];
            }else if (newJ < 0)
            {
                newJ = 0;
            }else if (newI < 0){
                newI = 0;
            }else
                printf("\nSorry you are out of the array!Try again\n");
            break;
        case 5:
            newI = oldI;
            newJ = oldJ;
            break;
        }
        for (i = 0; i < 7; i++){
            printf("\n");
            for (j = 0; j < 7; j++){
 
                if(newI == i && newJ == j){
                    printf("X ");
                }
                else if (i == 6 && j == 6){
                    printf("F");
                }else{
                    printf("%d ", arr[i][j]);
                }
            }
        }
        if(newI == 6 && newJ == 6){
            printf("\nCongrats! You reach the final!");
 
            atexit(printer);
 
            exit(0);
        }
    }
}
 
void printer(){
    printf("\nBye, have a nice day.\n");
}