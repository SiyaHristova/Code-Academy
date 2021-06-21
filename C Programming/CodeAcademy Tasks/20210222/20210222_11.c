/* Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union tagMyArg
{
    int firstIntValue;
    int secondIntValue;
    char szValue[64];
};
int main()
{
    union tagMyArg arg;

    arg.firstIntValue = -7;
    printf("First Value: %d\n", arg.firstIntValue);

    arg.secondIntValue = 10;
    printf("Second Value: %d\n", arg.secondIntValue);
    strcpy(arg.szValue, "c");
    printf("String: %s\n", arg.szValue);

    return 0;
}