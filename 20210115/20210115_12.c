// Ако имаме символен низ char str[] = “Hеllo”, заменете буквите l с х на същия символен низ и отпечатайте резултата на конзолата.

#include <stdio.h>
int main() {
    char str[] = "Hello";
    str[2] = 'x';
    str[3] = 'x';
    printf("Hello: %s", str);
    return 0;
}
