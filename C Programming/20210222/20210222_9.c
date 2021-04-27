/* Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union tagMyArg{
    int nValue;
    char szValue[64];
};
enum EMyConvType {INT_TO_STR, STR_TO_INT};
union tagMyArg convertArg(union tagMyArg* pArg, enum EMyConvType type){
    union tagMyArg ret;
    if(INT_TO_STR == type){
        sprintf(ret.szValue, "00%d", pArg->nValue);
    } else if(STR_TO_INT == type){
        ret.nValue = atoi(pArg->szValue);
    }
    return ret;
}

int main(){
    union tagMyArg arg, converted;
    strcpy(arg.szValue, "0013");
    converted = convertArg(&arg, STR_TO_INT);
    printf("Original: %s, converted: %d\n", arg.szValue, arg.nValue);

    arg.nValue = 12345;
    converted = convertArg(&arg, INT_TO_STR);
    printf("Original: %d, converted: %s\n", arg.nValue, arg.szValue);
    return 0;
}