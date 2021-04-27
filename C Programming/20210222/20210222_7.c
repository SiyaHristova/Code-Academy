/* Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>

union tagMyDate
{
    int nValue;
    float fValue;
    char szText[32];
};
int main(){
    union tagMyDate data = {13};
    printf("Memory size: sizeof(data): %d\n", sizeof(data));
    printf("nValue: %d, fValue: %f, Text: %s\n", data.nValue, data.fValue, data.szText);
    return 0;
}
