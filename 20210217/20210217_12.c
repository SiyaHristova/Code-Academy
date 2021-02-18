/* Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PassGen(char *cString, int MaxLength);

int main()
{
    srand(time(0));
    char Password[30] = {'s'};
    int iLength = 0;
    void (*PasswordGenerator)(char *, int) = PassGen;

    printf("How long the password needs to be (maximum is 30 characters):\n");
    scanf("%d", &iLength);

    PasswordGenerator(Password, iLength);

    printf("Your new password is:\n");
    for (int i = 0; i < iLength; i++)
    {
        printf("%c", Password[i]);
    }
}

void PassGen(char *cString, int MaxLength)
{
    for (int i = 0; i < MaxLength; i++)
    {
        cString[i] = 33 + rand() % 89;
    }
}