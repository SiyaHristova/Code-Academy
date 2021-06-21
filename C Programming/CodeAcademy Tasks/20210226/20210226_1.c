/* Дефинирайте структура като потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип. Отпечатайте. */
#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct Books
{
    char title[MAX];
    char authorFamilyName[MAX];
} Book;

int main()
{

    Book firstBook;

    strcpy(firstBook.title, "C Programming");
    strcpy(firstBook.authorFamilyName, "Smith");

    printf("Book title: %s\n", firstBook.title);
    printf("Book author: %s\n", firstBook.authorFamilyName);

    return 0;
}