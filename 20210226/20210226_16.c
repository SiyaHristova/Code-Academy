#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/
int table();
void game();

int main(void)
{
    table();

    return 0;
}

int table()
{
    int **gameArray = malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        gameArray[i] = calloc(8, sizeof(int));
    }

    int br = 16, i, j, chislo = 1;
    int choice = 0;
    int direction = 0;
    int lastChange = 0;
    int anotha;

    for (i = 0; i < 1; i++)
    {
        printf("\n");
        for (j = 0; j < 8; j++)
        {
            gameArray[i][j] = 0;
            printf("%d\t", gameArray[i][j]);
        }
    }

    for (i = 1; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 8; j++, br--)
        {
            gameArray[i][j] = br;
            printf("%d\t", gameArray[i][j]);
        }
    }
    while (chislo > 0 && chislo < 17)
    {
        printf("\nIzberete chislo za mestene (1-16) | to exit press 0: ");
        scanf("%d", &chislo);
        if (chislo == 0)
        {
            break;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (gameArray[i][j] == chislo)
                {
                    printf("\nIzberete premestvane");
                    printf("\n| 1=left | 2=down | 3=right | 5=up | 4=change number |\n");
                    scanf("%d", &direction);
                    if (direction == 4)
                    {
                        break;
                    }
                    switch (direction)
                    {
                    case 1:
                        gameArray[i][j - 2] = chislo;
                        lastChange = gameArray[i][j];
                        gameArray[i][j] = 0;
                        anotha = gameArray[i][j - 1];
                        gameArray[i][j - 1] = 0;
                        break;
                    case 2:
                        gameArray[i + 2][j] = chislo;
                        lastChange = gameArray[i][j];
                        gameArray[i][j] = 0;
                        anotha = gameArray[i + 1][j];
                        gameArray[i + 1][j] = 0;
                        break;
                    case 3:
                        gameArray[i][j + 2] = chislo;
                        lastChange = gameArray[i][j];
                        gameArray[i][j] = 0;
                        anotha = gameArray[i][j + 1];
                        gameArray[i][j + 1] = 0;
                        break;
                    case 5:
                        gameArray[i - 2][j] = chislo;
                        lastChange = gameArray[i][j];
                        gameArray[i][j] = 0;
                        anotha = gameArray[i - 1][j];
                        gameArray[i - 1][j] = 0;
                        break;
                    }
                    for (i = 0; i < 3; i++)
                    {
                        printf("\n");
                        for (j = 0; j < 8; j++)
                        {
                            printf("%d\t", gameArray[i][j]);
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 3; i++)
        free(gameArray[i]);
    free(gameArray);
}