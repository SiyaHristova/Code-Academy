#pragma once
#include <stdlib.h>
#include <stdio.h>
typedef struct bin_tree node;
typedef struct bin_tree
{
    int data;
    struct bin_tree *right, *left;
} node;

void insert(node **tree, int val);
void print_inorder(node *tree);
void deltree(node *tree);
node *search(node **tree, int val);