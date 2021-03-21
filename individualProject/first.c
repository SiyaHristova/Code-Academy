#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstWord[15], secondWord[15];
    /* *firstWord = (char*) malloc(sizeof(firstWord));
    *secondWord = (char *)malloc(sizeof(secondWord)); */
    printf("Enter the first word : ");
    scanf("%s", firstWord);
    printf("Enter the second word : ");
    scanf("%s", secondWord);
    int i, j, x = -1, y = -1, k;
    int m = strlen(firstWord);
    int n = strlen(secondWord);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            if (firstWord[i] == secondWord[j])
                if ((x == -1) && (y == -1))
                {
                    x = i;
                    y = j;
                }
    }
    if (x != -1)
    {
        for (i = 0; i < n; i++)
        {
            if (i == y)
            {
                printf("%s\n", firstWord);
            }
            else
            {
                for (k = 0; k < x; k++)
                    printf(" ");
                printf("%c\n", secondWord[i]);
            }
        }
    }
    else
    {
        printf("%s\n", firstWord);
        for (i = 0; i < n; i++)
        {
            for (k = 0; k < m; k++)
                printf(" ");
            printf("%c\n", secondWord[i]);
        }
    }
    /* free(firstWord);
    free(secondWord); */
    return 0;
}