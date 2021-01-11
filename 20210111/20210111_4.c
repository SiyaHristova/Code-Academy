#include <stdio.h>

void vdigniBitNa(unsigned int *n, int index);

int main(void) { 
    unsigned x = 6;
    vdigniBitNa(&x,0);
    printf("%d\n", x);
    return 0;
}

void vdigniBitNa(unsigned int *n, int index){
    unsigned mask = 1 << index;
    *n = *n | mask;
    return;
}
