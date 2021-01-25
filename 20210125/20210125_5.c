#include <stdio.h>
int main(void)
{
    int counter = 0;
    char c;
    c = getchar();
    while (c != '?')
    {
        //putchar(c);
        c = getchar();
        if ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z')){
            printf("%c", c);
        }
    }
    return 0;
}