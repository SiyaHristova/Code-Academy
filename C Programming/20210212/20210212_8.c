/* Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) 
сума на четните елементи (0, 2, 4,6....)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned uNumOfElem = 0;
    int *pVal = NULL;
    int iSum = 0;

    printf("Please enter lenght: ");
    scanf("%d", &uNumOfElem);

    pVal = (int *)alloca(uNumOfElem * sizeof(int));

    if (NULL == pVal)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    for (int i = 0; i < uNumOfElem; i++)
    {
        printf("Enter element %d: ", i);

        scanf("%d", (pVal + i));
    }

    for (int i = 0; i < uNumOfElem; i++)
    {
        if (i % 2 == 0)
        {
            iSum += *(pVal + i);
        }
    }
    printf("Sum of even index array elements is: %d\n", iSum);

    return 0;
}