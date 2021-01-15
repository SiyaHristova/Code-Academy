// Напишете глобална променлива, която увеличаваме с 1 във
// функция void test(). Извикайте функцията три пъти test() от main()
// принтирайте стойността на глобалната променлива.
#include <stdio.h>

void test();
extern int a;
int main()
{
    test();
    test();
    test();
    return 0;
}
void test()
{
    a++;
    printf("%d\n",a);
}

int a;