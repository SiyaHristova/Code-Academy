/* Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана. */
#include <stdio.h>
#include <string.h>
struct name
{
    int variable1;
    char variable2[128];
    float variable3;
};
int main()
{
    struct name newvariable; /*дефинираме нова променлива*/
    newvariable.variable1 = 50;
    strcpy(newvariable.variable2, "chocolate");
    newvariable.variable3 = 2.50;
    printf("Product: %s", newvariable.variable2);
    printf("\nPrice: %.2f",newvariable.variable3);
    printf("\nQuantity: %d", newvariable.variable1);
    return 0;
}
