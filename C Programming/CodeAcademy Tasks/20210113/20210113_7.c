//  Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357674 000, 3 657 895 000.
// Изведете всяка променлива на екрана със printf()

#include <stdio.h>

int main()
{
    short int a = 24212;
    printf("%d \n",a);
    int b = -1357674;
    printf("%d \n",b);
    unsigned int c = 1357674;
    printf("%u \n",c);
    long int d = -1357674000;
    printf("%ld \n",d);
    unsigned long long e = 3657895000;
    printf("%llu \n",e);

}