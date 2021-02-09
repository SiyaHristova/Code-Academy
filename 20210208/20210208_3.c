/* . Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5). */

#include <stdio.h>

int main()
{

    int iArr[5][5][5] = {{{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}}, {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}}};

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            for (int k = 0; k < 5; ++k)
            { 
                printf("Enter a value for iArr [%d] [%d] [%d]:\n", i, j, k);
                scanf("%d", &iArr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            for (int k = 0; k < 5; ++k)
            { 
                printf("iArr [%d] [%d]: %d %d\n", i, j, iArr[i][j]);
            }
        }
    }
    return 0;
}