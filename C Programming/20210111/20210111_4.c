// Създайте функция vdigniBitNa. Тя получава следните параметри - число и индекс. Функцията трябва да "вдига" бита на съответния индекс в числото (под "вдига" 
// ще разбираме да му присвои стойност 1).

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
