/*  Напишете функция, която връща резултат (а+в)*4. */

#include <stdio.h>

int sum(int a, int b);
int main(void)
{
    int a = 0, b = 0;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);
    printf("Rezult: %d\n", sum(a, b));
    return 0;
}

int sum(int a, int b){
    return (a+b)*4;
}
