/* Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer = NULL, c;
    int size = 2, i = 0;

    buffer = malloc(sizeof(char)* size);
    if (NULL == buffer)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    while ((c = getchar()) != EOF)
    {
        if (i == size - 1)
        {
            buffer = realloc(buffer, size*2);
            if (NULL == buffer)
            {
                printf("Allocation memory error!\n");
                exit(2);
            }
        }
        buffer[i++] = c;
    }
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}