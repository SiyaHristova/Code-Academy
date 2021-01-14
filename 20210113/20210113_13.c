//  . Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double,
//  инициализира по време на компилация съответните променливи съответно
//  в: a=‘a’, b=102, c=50000, d=6, e=-48.907. Програмата да извежда на екрана съдържанието на заделената за данни
//  памет, форматирано в съответствие с типа на отделните елементи данни

#include <stdio.h>

int main()
{
    char a = 'a';
    int b = 102;
    unsigned long int c = 50000;
    float d = 6; // слагам да е float тъй като в условието типовете са изброени в този ред
    double e = -48.907; // тук слагам да е double, заради условието, но ако сложим float ще задели по-малко памет
                        // и пак ще отпечата цялото число
    printf("a: %c;        Size of a: %d\n", a, sizeof(a));
    printf("b: %d;      Size of b: %d\n", b, sizeof(b));
    printf("c: %llu;    Size of c: %d\n", c, sizeof(c));
    printf("d: %.2f;     Size of d: %d\n", d, sizeof(d));
    printf("e: %.3f;  Size of e: %d\n", e, sizeof(e));


}