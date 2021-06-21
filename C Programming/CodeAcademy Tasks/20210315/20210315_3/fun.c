#include "head.h"

tree *insert(int d)
{
    tree *tmp = (tree *)malloc(sizeof(tree));
    tree *current = NULL;
    tree *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if (NULL == root)
    {
        root = tmp;
    }
    else
    {
        current = root;
        while (1)
        {
            parent = current;
            if (d < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = tmp;
                    return tmp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}
void printTree(tree* t){
    if(t){
        printf("%u ",t->data);
        printTree(t->left);
        printTree(t->right);
    }

}