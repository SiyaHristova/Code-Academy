/* Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */

#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void)
{
    char s[100], c = 0;
    int index = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            s[index] = c;
            index++;
        }
        else
        {
            s[index] = '\0';
            reverse(s);
            index = 0;
        }
    }
    return 0;
}

void reverse(char s[])
{
    int i = 0;

    for (i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}