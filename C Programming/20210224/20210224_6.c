/* Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/
#include <stdio.h>

#define MY_PRINT(...) printf("%d %d %d", __VA_ARGS__)
int main(void)
{
    MY_PRINT(3, 7, 21);
    return 0;
}