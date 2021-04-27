#include <stdio.h>
enum bool
{
    false,
    true
};
int main(void)
{
    enum bool b = true;
    switch (b)
    {
    case true:
        printf("true");
        break;
    case false:
        printf("False");
        break;
    }
    return 0;
}
