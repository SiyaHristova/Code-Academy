/* Направете едносвързан списък, съдържащ числата 1-14 и 
принтирайте петия елемент от края му. */
#include "head.h"
#include "fun.c"

t_node *start;

int main(void)
{
    int i;
    init();
    for (i = 1; i < 15; i++)
    {
        add(i);
    }
    printAfter(start);
    find_data(5);
    return 0;
}