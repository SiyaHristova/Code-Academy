/* Пребройте символите, подавани на конзолата, с
функцията getchar(); */

#include <stdio.h>
int main(void)
{
    int counter = 0;
    int c;
    c = getchar();
    while (c!=EOF)
    {
        c = getchar();
        counter ++;
    }
    printf("\n%d", counter);
    return 0;
}
