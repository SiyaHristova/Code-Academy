/* Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */
#include <stdio.h>
typedef int array[5];
int main()
{
    array arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
