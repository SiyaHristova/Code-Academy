/* Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union date
{
    unsigned short sVal : 6;
    char cVal : 6;
};
int main()
{
    union date arg;

    arg.sVal = 10;
    printf("Short Value: %d\n", arg.sVal);

    strcpy(arg.cVal, "c");
    printf("String: %s\n", arg.cVal);

    return 0;
}