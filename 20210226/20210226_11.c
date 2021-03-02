/*  тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include <stdio.h>
typedef struct node
{
    int iNum;
    struct nodeString* node;
}nodeString;

int main(){
    typedef nodeString *nod = (nodeString*)malloc(sizeof(nodeString));
    printf("%d", sizeof(nod));
    free(nod);
    return 0;
}
