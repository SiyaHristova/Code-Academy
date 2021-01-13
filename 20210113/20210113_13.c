// Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double, инициализира 
// по време на компилация съответните променливи съответно в: a=‘a’, b=102, c=50000, d=6, e=-48.907. 
// Програмата да извежда на екрана съдържанието на заделената за данни памет, форматирано в съответствие 
// с типа на отделните елементи данни 000 000 000 000 775 845. Изведете всяка променлива на екрана със printf()

#include <stdio.h> 

int main(){


    char a = 'a';    
    int b = 102;
    unsigned int c = 50000;
    unsigned int d = 6;
    float e = -48.907;
    printf("a: %d\n", sizeof(a));
    printf("b: %d\n", sizeof(b));
    printf("c: %d\n", sizeof(c));
    printf("d: %d\n", sizeof(d));
    printf("e: %d\n", sizeof(e));
    return 0;
}