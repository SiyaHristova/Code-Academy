/* Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин*/

#include <stdio.h>
#include "p.h"
int main(){
    int a = 0, b = 0, c = 0;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    printf("Sum(a+b): %d\n", add(a, b));
    printf("c+1 = %d", incr(c));
    
    return  0;
}
