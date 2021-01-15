// Запишете в осем последователни байтове в паметта
// със стойност 0xBB(1011 1011) и разпечатайте съдържанието на
// горните байтове, ако типът е: double, signed long long, unsigned
// long long

#include <stdio.h>
int main(void){
    double f = 0xBB;
    signed long long i = 0xBB;
    unsigned long long a = 0xBBu;
    printf("f = %lf, i = %lld, a = %lld", f, i, a);
    return 0;
}