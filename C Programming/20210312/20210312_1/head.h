#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t
{
    int data;
    node_t *next;
} node_t;

extern node_t *start;

void init();
int add(int data);
int addAfter(int n, int k);
void dellEnd(int *n);
int dellFirst(int *n);
node_t *dellElemReturnAfter(int *n, int k);
void printAfter(node_t *curr);