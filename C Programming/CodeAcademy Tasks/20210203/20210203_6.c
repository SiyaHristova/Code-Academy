/* Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */

#include <stdio.h>

void my_swap(int* a, int* b);

int main(void){

    int a = 0, b = 0;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    printf("\nValues before: a = %d, b = %d \n",a,b);
    my_swap(&a,&b);
    printf("Values after:  a = %d, b = %d\n",a,b);

    return 0;
}
void my_swap(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}