#include "head.h"
#include "fun.c"
/* Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво. */

void main()
{
    node *root;
    node *tmp;

    root = NULL;

    insert(&root, 7);
    insert(&root, 14);
    insert(&root, 28);
    insert(&root, 35);
    insert(&root, 65);
    insert(&root, 12);
    insert(&root, 18);
    insert(&root, 42);
    insert(&root, 81);
    insert(&root, 64);
    insert(&root, 61);
    insert(&root, 4);
    insert(&root, 13);

    printf("\nIn Order Display: ");
    print_inorder(root);

    tmp = search(&root, 7);
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }
    return 0;
}