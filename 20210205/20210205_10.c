/* Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s  */

#include <stdio.h>
#include <string.h>

void mystrncpy(char *s, char *t, int n)
{
    while(*t && n-- > 0)
        *s++ = *t++;

    int extra = strlen(s) - n;

    while (extra-- > 0) {
        *s++;
    }

    *s = '\0';
}
int main(){
    char s[] = "ABCDEF";
    char t[] = "GHIJ";

    mystrncpy(s, t, 4);
    printf("%s\n", s);
    return 0;
}