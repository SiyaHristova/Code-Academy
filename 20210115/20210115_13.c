// Ако имаме символен низ char str[] = “HELLO”, заменете
// всичките символи с главна буква със съответните символи с малка буква
#include <stdio.h>
int main() {
    char str[] = "HELLO";
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    printf("%c%c%c%c%c%c", str[0], str[1], str[2], str[3], str[4]);
    return 0;
}