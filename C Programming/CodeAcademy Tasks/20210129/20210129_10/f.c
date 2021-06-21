#include <stdio.h>
#include "p.h"
#include <math.h>

int min()
{
    unsigned int a = 0;
    unsigned int b = 0;
    printf("A for LCM: ");
    scanf("%d", &a);

    printf("B for LCM: ");
    scanf("%d", &b);
    int max = 0;

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0.0 && max % b == 0) {
            printf("\nThe LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        ++max;
    }
}

float fabsCopy(float a, float b)
{
    printf("\nAbs a: %.2f", fabs(a));
    printf("\nAbs b: %.2f\n", fabs(b));
}
float sqrtCopy(float a)
{
    if (a < 0)
    {
        printf("\n-1");
        return sqrt(fabs(a));
    }
    else
    {
        return sqrt(a);
    }
}
