// Да прочетем какво се случва със стойността на променливата x:

#include <stdio.h>

int main()
{
    char x = 8;
    x = x -2;
    printf("%c   %d \n",x,x);
    
    x= x+ 6;
    printf("%c   %d \n",x,x);
    
    x = x - 10 + 2;
    printf("%c   %d \n",x,x);
    return 0;
}
