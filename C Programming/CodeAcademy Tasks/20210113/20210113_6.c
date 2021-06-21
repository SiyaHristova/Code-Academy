// Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9 000 000 000 000 775 845.
// Изведете всяка променлива на екрана със printf()

#include <stdio.h> 

int main(){
    short int a = -127;
    unsigned short int b = 255;
    unsigned int c = 6237498;
    unsigned long int d = 4294967292;
    long long int e = -9000000000000775845;
    printf("%d\n %d\n %d\n %lld\n %lld", a,b,c,d,e);
    return 0;
}
