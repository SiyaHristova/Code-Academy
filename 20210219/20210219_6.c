/* Направете по подобен начин триъгълник */

#include <stdio.h>
struct point
{
    int x;
    int y;
} a, b;

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
        for(j = a.y; j<=i; j++){
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
