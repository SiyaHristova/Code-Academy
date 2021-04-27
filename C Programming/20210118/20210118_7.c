// Условен оператор (?:)
// а) въведете стойност за nA с scanf
// b) използвайте условния оператор за намиране на максималното от две числа

#include <stdio.h>
int main()
{
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0); /* сравнява число */
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    scanf("%d", &nA);
    printf("A new value is %d\n", nA);
    if(nA>nB){
        printf("nA (%d) is greater than nB (%d)", nA, nB);
    }
    else{
        printf("nB (%d) is greater than nA (%d)\n", nB, nA);
    }
    return 0;
}
