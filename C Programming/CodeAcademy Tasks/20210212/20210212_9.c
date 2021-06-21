/* Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned size = 0;
    int *pVal = NULL;

    printf("Please enter size: ");
    scanf("%d", &size);

    pVal = (int *)malloc(size * sizeof(int));

    if (NULL == pVal)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Adresses of malloc memory: %p\n", pVal);

    printf("Please enter new size: ");
    scanf("%d", &size);

    pVal = realloc(pVal, size * sizeof(int));

    if (NULL == pVal)
    {
        printf("Allocation memory error!\n");
        exit(2);
    }
    printf("Adresses of realloc memory: %p\n", pVal);
    free(pVal);

    return 0;
}