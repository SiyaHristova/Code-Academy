#include "head.h"

void init()
{
    start = NULL;
}
int add(int number)
{

    t_node *q = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
    {
        return -1;
    }
    start->data = number;
    start->next = q;
    return 0;
}
void find_data(int item)
{
    int pos = 0;
    t_node *current = NULL;
    if (start == NULL)
    {
        printf("\nLinked List not initialized");
        return;
    }

    current = start;
    while (current->next != NULL)
    {
        if (current->data == item)
        {
            printf("\n%d. element found at position %d\n", item, pos);
            return;
        }

        current = current->next;
        pos++;
    }

    printf("\n%d does not exist in the list", item);
}

void printAfter(t_node *curr)
{

    t_node *p = start;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}