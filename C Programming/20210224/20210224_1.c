/* Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода. */
#include <stdio.h>
#define const_pi 3.14 
#define const_e  2.71
#define const_some  5.6

int main(){
    float rezPI = const_pi * const_some;
    printf("Pi rez: %.2f", rezPI);

    float rezE = const_e * const_some;
    printf("\ne rez: %.2f", rezE);
    return 0; 
}