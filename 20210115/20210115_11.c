
// . Ако имаме символен низ от символа char str[] = “Hello”;
// копирайте всеки един от неговите символи в низ, който да изглежда
// огледален на него. Ето така char rts[] = “ollaH”; и принтирайте резултата
#include <stdio.h>
int main() {
    char str[] = "Hello";
    printf("Hello: %c%c%c%c%c%c", str[4], str[3], str[2], str[1], str[0]);
    return 0;
}
