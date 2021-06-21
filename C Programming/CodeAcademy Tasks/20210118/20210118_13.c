//Логически оператори

#include <stdio.h>
int main()
{
    int nA = 0; /* използвайте scanf */ 
    printf("nA : ");
    scanf("%d", &nA);

    int nB = 20;
    printf("nB : ");
    scanf("%d", &nB);

    int nX = 20;
    printf("nX : ");
    scanf("%d", &nX);

    int nY = 30;
    printf("nY : ");
    scanf("%d", &nY);
   
    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if (nX > nY || nY != 20)
    {
        printf("|| Operator : Only one condition is true\n");
    }
    if (!(nA > nB && nB != 0))
    {
        printf(" ! Operator : Both conditions are true\n");
    }
    if ((nA*nB > nY && nX < nY) && nA > nX) 
    {
        printf("Multiple use of &&, all conditions are true");
    }
    if(nA + nB > nX && nA - nB < nY){
        printf("&& Operator : Both conditions are true\n");
    }
    else
    {
        printf("Multiple use of &&, not all conditions are true");
    }
    
}
/* опитайте различни комбинации, следете приоритета на
операторите */