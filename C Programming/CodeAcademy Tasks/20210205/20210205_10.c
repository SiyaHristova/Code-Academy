/* Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s  */

#include <stdio.h>
#include <string.h>

void mystrncpy(char *s, char *t, int n)
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
int main(){
    char s[] = "ABCDEF";
    char t[] = "GHIJ";

    mystrncpy(s, t, 1);
    return 0;
}