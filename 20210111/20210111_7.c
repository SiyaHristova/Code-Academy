// Занулете всички битове на числата, намиращи се на четна позиция

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
    unsigned mask = ~(1 << index);
    *n = *n & mask;
}
