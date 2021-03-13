#include "head.h"
#include "fun.c"

/* Реализация на списък. Напишете програма, която добавя и 
изтрива елемент от списък по позиция в списъка. Използвайте следния 
елемент на динамичния списък: */
node_t *start;

int main()
{
    int i, addNum, dellN = 5, pos;
    init();
    for (i = 1; i < 10; i++)
    {
        add(i);
    }
    printf("Please enter after which number of the list you want to add new number: ");
    scanf("%d", &pos);
    printf("Please enter which number you want to add: ");
    scanf("%d", &addNum);

    addAfter(pos, addNum);
    dellFirst(&dellN);
    printAfter(start);
    return 0;
}