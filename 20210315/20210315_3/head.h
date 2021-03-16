#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct treeStructure tree;

typedef struct treeStructure{
    unsigned int data;
    tree* left;
    tree* right;
}tree;

extern tree* root;
tree *insert(int d);
void printTree(tree* t);