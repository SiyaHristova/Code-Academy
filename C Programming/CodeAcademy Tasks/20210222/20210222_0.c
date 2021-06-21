#include <stdio.h>

struct tagTest
{
    char m_chValue;
    unsigned short m_usValue;
};

int main(){
    printf("%d", sizeof(struct tagTest));
}