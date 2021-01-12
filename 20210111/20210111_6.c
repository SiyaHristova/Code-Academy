// Променете стойността на бита на дадено число на определена позиция.

#include <stdio.h>

void obarniBitNa(unsigned int *n, int index);

int main(void) { 
    unsigned int n = 6;
    obarniBitNa(&n, 2);
    printf("%d\n", n);
    return 0;
}

void obarniBitNa(unsigned int *n, int index){
    *n ^= (1u << index);
}
