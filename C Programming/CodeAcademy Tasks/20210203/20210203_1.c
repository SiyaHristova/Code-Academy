/* декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);

 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/

#include <stdio.h>

int main()
{
    char cArr[3] = {'a', 'b', 'c'};
    int iArr[3] = {1, 2, 3};
    double dArr[3] = {1.5, 1.6, 1.7};

    printf("Size of cArr: %d Bytes\n", sizeof(cArr));
    printf("Size of iArr: %d Bytes\n", sizeof(iArr));
    printf("Size of dArr: %d Bytes\n", sizeof(dArr));


    printf("char: %c", cArr[2]);
    printf("\nint: %d", iArr[2]);
    printf("\nDouble: %.2f", dArr[2]);
    return 0;
}

