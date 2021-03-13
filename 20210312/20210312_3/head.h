#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct t_node t_node;

typedef struct t_node{
    int data;
    t_node *next;
}t_node;

extern t_node* start;

void init();
int add(int number);
void find_data(int item);
void printAfter(t_node *curr);