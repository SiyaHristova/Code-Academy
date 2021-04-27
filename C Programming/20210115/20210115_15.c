// Използвайте статична локална променлива, за да постигнете същото поведение, описано в задача 14

#include <stdio.h>

void test();

int main()
{
    test();
    test();
    test();
    return 0;
}

void test()
{
    static int a = 1;
    a++;
    printf("%d \n",a);
}