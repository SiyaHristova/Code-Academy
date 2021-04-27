/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void password();
void menu();

int main(void)
{
    password();
    return 0;
}
void password()
{

    srand((unsigned int)(time(NULL)));

    int index = 0;

    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cArr[6];
    char *p = cArr;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = characters[rand() % (sizeof characters - 1)];
        printf("%c", *(p + i));
    }
}