/*  Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация. */

#include <stdio.h>
int main(void)
{
    int c = 0;
    int flag = 1;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            if ((flag == 1 && c == ' ') || (flag == 1 && c == '\t'))
            {
                continue;
            }
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        putchar(c);
        if (c == '(')
        {
            putchar(')');
        }
    }
    return 0;
}