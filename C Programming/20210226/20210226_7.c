/* Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С. */
/* auto, double, int, struct, break, else, long, switch, case, enum, register, typedef, char, extern, return, union, continue,
for, signed, void, do, if, static, while, default, goto, sizeof, volatile, const, float, short, unsigned */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

typedef struct Key
{
    char keyWord[MAX];
    int id;
} key_t[] = {"auto", 1,
             "double", 2,
             "int", 3,
             "struct", 4,
             "break", 5,
             "else", 6,
             "long", 7,
             "switch", 8,
             "case", 9,
             "enum", 10,
             "register", 11,
             "typedef", 12,
             "char", 13,
             "extern", 14,
             "return", 15,
             "union", 16,
             "continue", 17,
             "for", 18,
             "signed", 19,
             "void", 20,
             "do", 21,
             "if", 22,
             "static", 23,
             "while", 24,
             "default", 25,
             "goto", 26,
             "sizeof", 27,
             "volatile", 28,
             "const", 29,
             "float", 30,
             "short", 31,
             "unsigned", 32};
int main()
{
    return 0;
}