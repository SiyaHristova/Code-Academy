// Низове
#include <stdio.h>
int main() {
    char str[] = "Hello";
    str[0] == 'H';
    str[1] == 'e';
    str[2] == 'l';
    str[3] == 'l';
    str[4] == 'o';
    printf("Hello: %c%c%c%c%c%c", str[4], str[3], str[2], str[1], str[0]);
    return 0;
}