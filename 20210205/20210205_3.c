/* Първата функция strcpy(s, t), която копира низа t в низа s. */

#include <stdio.h>
void strcpy1(char *s, char *t);

int main()
{
    char first[] = "Hello World!";
    char second[10];
    strcpy1(second, first);
    printf("%s", second);
}

void strcpy1(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}