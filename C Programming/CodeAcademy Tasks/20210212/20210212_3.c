/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */

#include <stdio.h>
#include <stdlib.h>
int fun(int *pVal, int uNumOfElem)
{
    int iSum = 0;
    for (int i = 0; i < uNumOfElem; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", (pVal + i));
    }
    for (int i = 0; i < uNumOfElem; i++)
    {
        iSum += *(pVal + i);
    }
    printf("Sum of array elements is: %d\n", iSum);
}
int main()
{
    unsigned uNumOfElem = 0;
    int *pVal = NULL;
    int iSum = 0;

    printf("Please enter lenght: ");
    scanf("%d", &uNumOfElem);

    pVal = (int *)malloc(uNumOfElem * sizeof(int));
    if (NULL == pVal)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    fun(pVal, uNumOfElem);

    printf("\nEnter the new size: ");
    scanf("%u", &uNumOfElem);

    pVal = (int *)realloc(pVal, uNumOfElem * sizeof(int));
    if (NULL == pVal)
    {
        printf("Allocation memory error!\n");
        exit(2);
    }
    fun(pVal, uNumOfElem);

    free(pVal);

    return 0;
}