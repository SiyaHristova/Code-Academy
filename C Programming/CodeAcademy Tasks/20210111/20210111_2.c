//Създайте функция vzemiBitna. Функцията получава параметър число и индекс. Тя връща стойността на бита на съответния индекс.

#include <stdio.h>

int vzemiBitna(unsigned int n, int index);

int main(void) { 
    unsigned int n = 2;
    printf("%d\n", vzemiBitna(n, 1));
    return 0;
}

int vzemiBitna(unsigned int n, int index){
    int mask = 1;
    n = n >> index;
    return n & mask;
}
