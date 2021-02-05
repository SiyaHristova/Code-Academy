/* Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */

#include <stdio.h>

void our_strcat(char *s, char *t);

int main()
{
    char first[] = "first +";
    char second[] = " second";
    our_strcat(first, second);
    printf("\n%s", first);
    return 0;
}

void our_strcat(char *s, char *t)
{
    while(*s!='\0')
        s++;
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}