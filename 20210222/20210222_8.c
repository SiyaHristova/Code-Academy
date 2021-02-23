/* Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union tagMyArg{
    int nValue;
    char szValue[64];
};
enum EMyType {MY_INT, MY_STR};

void printArg(union tagMyArg* pArg, enum EMyType type){
    if(MY_INT == type){
        printf("int: %d\n", pArg->nValue);
    }
    else if(MY_STR == type){
        printf("string: %s\n", pArg->szValue);
    }
}
int main(){
    union tagMyArg arg;
    strcpy(arg.szValue, "text");
    printArg(&arg, MY_STR);
    arg.nValue = 987654321;
    printArg(&arg, MY_INT);
    return 0;
}