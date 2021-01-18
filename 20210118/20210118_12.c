// Аритметични оператори
#include <stdio.h>
int main()
{
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d \n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d \n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);
    /* homework: examples for '*' и '+', float - използвайте вместо int */
    float x = 5.9;
    float y = 10.5;
    float rez = 0;
    rez = x * y;
    printf("%.2f * %.2f = %.2f\n", x, y, rez);

    rez = x + y;
    printf("%.2f + %.2f = %.2f", x, y, rez);
    return 0;
}