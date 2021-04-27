/* . а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @ */
#include <stdio.h>
struct point
{
    int x;
    int y;
} a, b;
/* a)
int main(){
    struct rectangle a, b;   
    for(int i = 0; i<15; i++){
        for(int j = 0; j <15; j++){
            if(j>a.x && i>a.y && i<b.y && j<b.x)
                printf("%c", '@');
            printf("%c", '-');
        }
        printf("\n");
    }
    return 0;
} */

int main()
{
    int i = 0;
    int j = 0;
    struct point a = {3, 4};
    struct point b = {7, 10};

    char board[15][15];
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            board[i][j] = '-';
        }
    }
    for(i = a.x; i<=b.x; i++){
        for(j = a.y; j<=b.y; j++){
            board[i][j] = '@';
        }
    }
    for(i = 0; i<15; i++){
        for(j = 0; j<15; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
