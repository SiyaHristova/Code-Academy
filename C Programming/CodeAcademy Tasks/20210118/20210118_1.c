// имаме две променливи int x = 10; и int y = 10;
// създайте две променливи int true, false; На първата присвоете
// резултата от сравнението на х == у, а на втората х != у принтирайте
// с printf променливите true и false.

#include <stdio.h>

int main()
{
    int x = 10, y = 10;
    int true, false;
    true = x == y;   // true = 1, тъй като условието е вярно
    false = x!=y;   // false = 0, тъй като условието не е вярно
    printf("true = %d\nfalse = %d", true, false);
    return 0;
}
