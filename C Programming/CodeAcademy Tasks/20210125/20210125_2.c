/* Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar(); */

#include <stdio.h>
int main(void)
{
    int counter = 0;
    char c;
    while (c!=EOF)
    {
        if((c= getchar())=='\n'){
            counter ++;
        }
    }
    printf("\n%d", counter);
    return 0;
}
