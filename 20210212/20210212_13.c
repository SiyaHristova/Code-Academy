/* Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float result;
    float *pVal = NULL;
    
    pVal = (float*)malloc(2*sizeof(float));
    if(NULL == pVal){
        printf("Allocation memory error!\n");
        exit(1);
    }
    
    printf("\nPlease enter first base, then power!\n");
	for(int i=0; i < 2; i++)
	{
		printf("Enter element %d: ", i);
        
		scanf("%f",(pVal+i));
	}
    
    for(int i=0; i < 2; i++)
	{
		 result = pow(*(pVal),*(pVal+i));
	}
    printf("%.2f^(%.0f) = %.2lf", *(pVal), *(pVal + 1), result);
	free(pVal);
    return 0;
}