/* Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned uNumOfElem = 0;
    int *pVal = NULL;
    int iSum = 0;

    printf("Please enter lenght: ");
    scanf("%d", &uNumOfElem);
    
    pVal=(int*)calloc(uNumOfElem, sizeof(int));

    if (NULL == pVal)
            {
                printf("Allocation memory error!\n");
                exit(1);
            }

	for(int i=0; i < uNumOfElem; i++)
	{
		printf("Enter element %d: ", i);
        
		scanf("%d",(pVal+i));
	}
    
    for(int i=0; i < uNumOfElem; i++)
	{
		iSum += *(pVal+i);
	}
    printf("Sum of array elements is: %d\n", iSum);
	free(pVal);
	
	return 0;
}