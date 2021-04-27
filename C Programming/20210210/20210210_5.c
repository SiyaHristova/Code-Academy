/* Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i */

#include <stdio.h>
int sum_array(const int a[], int n)
{
    int sum = 0;
    const int *p = a;
    p = a;
    for(const int *q = p; p < a + n; ++p )
    {
        sum += *p;
    }
    printf("\nSum: %d\n", sum);
}

int main()
{
    int iArr[5], n = 0;
    printf("enter lenght: ");
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        printf("%d. element: ",i);
        scanf("%d", &iArr[i]);
    }

    sum_array(iArr, n);

    return 0;
}
