/* Напишете структура с потребителски тип key_t, която
съдържа символен низ и число. */
#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct Books
{
    char title[MAX];
    int id;
} key_t;

int main()
{
    key_t firstBook;

    strcpy(firstBook.title, "C Programming");
    firstBook.id = 5;

    printf("Book id: %d\n", firstBook.id);
    printf("Book title: %s\n", firstBook.title);

    return 0;
}