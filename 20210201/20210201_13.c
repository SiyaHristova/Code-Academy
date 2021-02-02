/*  напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

#include <stdio.h>

char *mytoupper(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 'a' - 'A';
        }
        i++;
    }
    return s;
}

int main(void) {
    char s[] = "StrinG HERE";
    printf("%s\n", mytoupper(s));
    return 0;
}