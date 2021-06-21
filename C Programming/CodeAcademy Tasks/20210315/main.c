#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

int main()
{
    /* Let us create following BST
		  50
		/	 \
	   30	 70
	   / \   / \
	  20 40 60 80 */
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
