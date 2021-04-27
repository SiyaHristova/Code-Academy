/*  Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */

#include <stdio.h>

void our_strcat(char *s, char *t, int n);

int main()
{
    char first[] = "first+";
    char second[] = "second";
    our_strcat(first, second, 1);
    return 0;
}

void our_strcat(char *s, char *t, int n)
{
    int i = 0, j = 0;
    for(i;s[i] != '\0';i++){
    }
    for (j;j<n;j++,i++){
        s[i] = t[j];
    }
    s[i] = '\0';
    printf("%s",s);
}