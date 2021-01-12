//  Направете на нула битовете в числа, намиращи се на позиции между 3 и 7

#include <stdio.h>

void obarniBitNa(unsigned int *n, int index);

int main(void) { 
    unsigned int n = 111;
    obarniBitNa(&n, 3);
    obarniBitNa(&n, 4);
    obarniBitNa(&n, 5);
    obarniBitNa(&n, 6);
    obarniBitNa(&n, 7);
    printf("%d\n", n);
    return 0;
}

void obarniBitNa(unsigned int *n, int index){
    *n ^= (1u << index);
    unsigned mask = ~(1 << index);
    *n = *n & mask;
}
