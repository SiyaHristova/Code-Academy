// Relational operators

#include <stdio.h>
int main()
{
    int nX = 3; /* homework, input with scanf */
    int nY = 20;
    scanf("%d", &nX);
    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    // else{
    //     printf("%d and %d are not equal\n", nX, nY);
    // }
    if (nX != nY)
    {
        printf("%d is not equal %d\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY)
    {
        printf("%d is greater than %d\n", nY, nX);
    }
    if (nX >= nY)
    {
        printf("%d is greater than or equal %d\n", nX, nY);
    }
    if (nX <= nY)
    {
        printf("%d is greater than or equal %d\n", nY, nX);
    }
    return 0;
} /* използвайте и останалите оператори за сравнение */