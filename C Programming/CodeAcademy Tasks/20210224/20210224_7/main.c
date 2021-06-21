/* Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти. */

#include <stdio.h>
#include "head.h"
#include "fun.c"

int main()
{
    int iSecondNumber = 10;
    int sum = sumOf2Numbers(iSecondNumber);
    int multiply = multiplyOf2Numbers(iSecondNumber);

    printf("Sum of iFirstNum(%d) and iSecondNum(%d): %d\n", iFirstNum, iSecondNumber, sum);
    printf("Multiply of iFirstNum(%d) and iSecondNum(%d): %d\n", iFirstNum, iSecondNumber, multiply);

    return 0;
}