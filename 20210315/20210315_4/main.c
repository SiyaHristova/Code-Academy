/*  Да се изтрият в този ред върховете 1, 7, 12 и 
14 от дървото на */
#include "head.h"
#include "fun.c"
int main()
{
    struct node *root = NULL;
    root = insert(root, 6);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 10);
    root = insert(root, 8);
    root = insert(root, 7);
    root = insert(root, 13);
    root = insert(root, 11);
    root = insert(root, 12);
    root = insert(root, 14);

    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("\nDelete 1\n");
    root = deleteNode(root, 1);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 7\n");
    root = deleteNode(root, 7);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 12\n");
    root = deleteNode(root, 12);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 14\n");
    root = deleteNode(root, 14);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    return 0;
}