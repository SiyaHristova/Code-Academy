/* Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
#include <stdio.h>

struct Stack
{
    int *contents;
    int top;
};
Stack create(int size);
void destroy(Stack s);
int pop();
void push() int top() int isFull();
int isEmpty(void); */

#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int maxsize;
    int top;
    int *items;
};
struct stack *newStack(int capacity)
{
    struct stack *pt = (struct stack *)malloc(sizeof(struct stack));

    pt->maxsize = capacity;
    pt->top = -1;
    pt->items = (int *)malloc(sizeof(int) * capacity);

    return pt;
}
int size(struct stack *pt)
{
    return pt->top + 1;
}
int isEmpty(struct stack *pt)
{
    return pt->top == -1;
}
int isFull(struct stack *pt)
{
    return pt->top == pt->maxsize - 1;
}
void push(struct stack *pt, int x)
{
    if (isFull(pt))
    {
        printf("Overflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    }
    printf("Inserting %d\n", x);
    pt->items[++pt->top] = x;
}
int peek(struct stack *pt)
{
    if (!isEmpty(pt))
    {
        return pt->items[pt->top];
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}
int pop(struct stack *pt)
{
    if (isEmpty(pt))
    {
        printf("Underflow\nProgram Terminated\n");
        exit(EXIT_FAILURE);
    }
    printf("Removing %d\n", peek(pt));
    return pt->items[pt->top--];
}

int main()
{
    struct stack *pt = newStack(5);

    push(pt, 1);
    push(pt, 2);
    push(pt, 3);

    printf("The top element is %d\n", peek(pt));
    printf("The stack size is %d\n", size(pt));

    pop(pt);
    pop(pt);
    pop(pt);

    if (isEmpty(pt))
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack is not empty");
    }

    return 0;
}