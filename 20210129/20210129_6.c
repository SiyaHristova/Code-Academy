/* Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/

#include <stdio.h>

int chetno(int a);
int main(void)
{
    int a = 0;
    printf("a: ");
    scanf("%d", &a);
    chetno(a);
    return 0;
}

int chetno(int a){
    if(a%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    
}