/* Напишете програма, която да премахва всички
коментари в една С програма. */

#include<stdio.h>

void rcomment(int a);
void incomment(void);
void echo_quote(int a);

int main(void)
{
    int a = 0, b = 0;

    printf("Please enter text: \n");

    while((a=getchar())!=EOF)
        rcomment(a);

    return 0;
}

void rcomment(int a)
{
    int b = 0;

    if( a == '/')
    {
        if((b=getchar())=='*')
         incomment();
        else if( b == '/')
        {
            putchar(a);
            rcomment(b);
        }
        else 
        {
            putchar(a);
            putchar(b);
        }
    }
    else
        putchar(a);
}

void incomment()
{
    int a = 0, b = 0;
     
    a = getchar();
    b = getchar();

    while(a!='*' || b !='/')
    {
        a = b;
        b = getchar();
    }
}
