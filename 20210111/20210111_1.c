#include <stdio.h>

int main(void) { 

    int a = 3;
    int b = 5;
    int rez = a & b;
    printf("%d\n", rez);

    rez = a | b;
    printf("%d\n", rez);

    rez = a ^ b;
    printf("%d\n", rez);
    return 0;
}
