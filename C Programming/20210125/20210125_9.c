/* Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch, a;
    printf("Enter Sentence\n");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        printf("%c", ch);
    }
    printf(" \n");

    return 0;
}