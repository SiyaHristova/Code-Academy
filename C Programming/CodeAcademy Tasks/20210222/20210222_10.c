/* Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union tagMyVar{
    int nValue;
    char szValue[64];
};
enum EMyType {VALUE_INT, VALUE_STR};
struct tagMyValue{
    enum EMyType type;
    union tagMyVar var;
};
void printValue(struct tagMyValue* pValue){
    if(VALUE_INT == pValue->type){
        printf("INT: %d\n", pValue->var.nValue);
    }
    else if(VALUE_STR == pValue->type){
        printf("STR: %s\n", pValue->var.szValue);
    }
}
int main(){
    struct tagMyValue value = {VALUE_INT, 12345};
    printValue(&value);
    value.type = VALUE_STR;
    strcpy(value.var.szValue,"test");
    printValue(&value);
    return 0;
}