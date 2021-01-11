#include <stdio.h>

void vdigniBitNa(unsigned int *n, int index);

int main(void) { 
    unsigned x = 35;
    // 35(10) = 0010 0011(2)
    
    vdigniBitNa(&x, 3);
    vdigniBitNa(&x, 6);
   
    printf("%d\n", x);
    // otgovorat shte bade 107(10) = 0110 1011 (2)
    return 0;
}

void vdigniBitNa(unsigned int *n, int index){
    unsigned mask = 1 << index;
    *n = *n | mask;
    return;
}