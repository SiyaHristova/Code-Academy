// Създайте функция obarniBitNa. Тя получава следните параметри - число и индекс. Като резултат функцията обръща бита на съответната позиция в
// числото (съответно от 0 на 1 или от 1 на 0)

#include <stdio.h>

void obarniBitNa(unsigned int *n, int index);

int main(void) { 
    unsigned int n = 6;
    obarniBitNa(&n, 1);
    printf("%d\n", n);
    return 0;
}

void obarniBitNa(unsigned int *n, int index){
    *n ^= (1u << index);
}
