/*   Напишете функция, която връща резултат a*2 + b*c */

#include <stdio.h>

int sum(int a, int b, int c);
int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);
    printf("%d\n", sum(a, b, c));
    return 0;
}

int sum(int a, int b, int c){
    return a*2 + b*c;
}