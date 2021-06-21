#include "p.h"

/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл */

int main(void){

    int a,b;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    sum(a,b);

    return 0;
}