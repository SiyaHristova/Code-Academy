#include "head.h"
#include "fun.c"

/* Напишете функцията за добавяне на елемент в дървото рекурсивно 
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T) */

void main()
{
    node *root;
    node *tmp;
    root = NULL;
    insert(&root, 1);
    insert(&root, 2);
    insert(&root, 20);
    insert(&root, 30);
    insert(&root, 60);
    insert(&root, 120);

    printf("\nIn Order Display: ");
    print_inorder(root);

    return 0;
}