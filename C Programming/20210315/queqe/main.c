#include "head.h"
#include "fun.c"

int main(void)
{
    int n = 1;
    while (n)
    {
        printf("Enter a digit:\n");
        scanf("%d", &n);
        write(n);
    }
    while (read(&n))
        printf("%d ", n);
    return 0;
}