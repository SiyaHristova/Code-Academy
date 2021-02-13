/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned uNumOfElem = 0;
    int *pVal = NULL;

    printf("Please enter lenght: ");
    scanf("%d", &uNumOfElem);
    
    pVal=(int*)malloc(uNumOfElem*sizeof(int));

	for(int i=0; i < uNumOfElem; i++)
	{
		printf("Enter element %d: ", i);
        
		scanf("%d",(pVal+i));
	}
	free(pVal);
	
	return 0;
}