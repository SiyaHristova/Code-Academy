/* Дефинирайте стринг: „Baba, kaka, mama” заменете „а“ със „о“ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char **a;
    char *ptr;

    a = (char **)malloc(20 * sizeof(char *));

    for (i = 0; i < 20; i++)
    {
        a[i] = (char *)malloc(sizeof(char) * 8);
    }

    strcpy(a[1], "baba, mama, kaka");

    ptr = a[1];
    while (*ptr != '\0')
    {
        if (*ptr == 'a')
        {
            *ptr = 'o';
        }
        ptr++;
    }

    printf("%s\n", a[1]);
    free(a);
    return 0;
}