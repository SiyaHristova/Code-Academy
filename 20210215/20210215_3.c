/* Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char. */

#include <stdio.h>

int main()
{
    int i = 5;
    int *pI = &i;

    char c = 's';
    char *pC = &c;

    float f = 5.6;
    float *pF = &f;

    return 0;
}