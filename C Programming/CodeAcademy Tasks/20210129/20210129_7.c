/* Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на    S1 = (a*b)/2
четириъгълник със същите дължини на страните, като раменете на    S = S1 * 2
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/

#include <stdio.h>

int triangle(int a, int b);
int quadrilateral(int a, int b);

int main(void)
{
    int a = 0, b = 0;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("Liceto na triagalnika: %d", triangle(a,b));

    printf("\nLiceto na kvadrata: %d", quadrilateral(a,b));
    return 0;
}

int triangle(int a, int b){
    return (a*b)/2;
}
int quadrilateral(int a, int b){ 
    return (triangle(a,b))*2;
}