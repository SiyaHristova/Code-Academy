/* Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира? */

#include <stdio.h>

int main()
{
    int i = 5;
    int *pI = &i;
    printf("%p", pI); /* отпечатва адреса на i */
    return 0;
}