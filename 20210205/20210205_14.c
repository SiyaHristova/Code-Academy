/* Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */

#include <stdio.h>

int main(){
    int iArr[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            
            printf("Enter a value for iArr [%d] [%d]:\n", i, j);
            scanf("%d", &iArr[i][j]);
        }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            
            printf("iArr [%d] [%d]: %d %d\n", i, j, iArr[i][j]);
        }
    return 0;
}