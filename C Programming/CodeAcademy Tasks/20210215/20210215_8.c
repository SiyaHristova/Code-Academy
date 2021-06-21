/* Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf */

#include <stdio.h>

int main()
{
    int i = 5;
    int *pI = &i;
    printf("%p", pI); 
    return 0;
}