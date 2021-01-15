// Низове
#include <stdio.h>
int main() {
    char str[] = "Hello";
    str[2] = 'x';
    str[3] = 'x';
    printf("Hello: %c%c%c%c%c%c", str[0], str[1], str[2], str[3], str[4]);
    return 0;
}