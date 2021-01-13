// Създайте С програма, която калкулира стойността на покупки в магазин за хранителни стоки. 
// Клиентът може да закупи различна комбинация от продукти. В магазина има следните налични продукти и цени
#include <stdio.h> 

int main(){
    float tom, flourKg, candyBr;
    int milkBr, iceBr, lollipopBr;
    float rez;

    float tomatoes = 4.5;
    float flour = 1.8;
    float milk = 0.5;
    float iceCream = 0.6;
    float candy = 1.5;
    float lollipop = 0.15;
    printf("How many kilograms of tomatoes?\n");
    scanf("%f", &tom);

    printf("How many kilograms of flour?\n");
    scanf("%f", &flourKg);

    printf("How many milk?\n");
    scanf("%d", &milkBr);

    printf("How many iceCreams?\n");
    scanf("%d", &iceBr);

    printf("How many kilograms of candy?\n");
    scanf("%f", &candyBr);

    printf("How many lollipops?\n");
    scanf("%d", &lollipopBr);

    rez = tom*tomatoes + flourKg*flour + milk*milkBr + iceBr*iceCream + candy*candyBr + lollipopBr*lollipop;
    printf("%f", rez);
    return 0;
}