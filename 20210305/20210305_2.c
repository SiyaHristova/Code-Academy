/* Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата->
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева;
                                    21-50 г 0,69 лева; 
                                    51-100 г  1,02 лева; 
                                    101-200 г 1,75 лева; 
                                    201-350 г 2,13 лева; 
                                    351-500 г 2,44 лева; 
                                    501- 1000 г 3,20 лева; 
                                    1001-2000 г 4,27 лева; 
                                    2001-3000 г 5,03 лева;
Обем:   до 10см + 0,01лв; 
        10- 50 см + 0,11 лева,
        50-100 см + 0,22лв, 
        100-150см + 0,33лв, 
        150-250см +0,56лв, 
        250-400см+1.50лв, 
        400-500см+3,11лв, 
        500-600см+4,89лв, 
        над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева. */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float priceGramas;
    float gramas;
    float volume;
    float priceVolume;
    float total; //общата цена за една пратка (грамове + обем)
} info;
float volumeIf(float volume);
float gramasIf(float gramas);
void arrayFuller(info *list, int n);

int main()
{
    int n = 0;
    printf("Please enter how many packages you have: ");
    scanf("%d", &n);
    info *list = (info *)malloc(n * sizeof(info));
    arrayFuller(list, n);
    free(list);
    return 0;
}

void arrayFuller(info *list, int n)
{
    float sumGramas = 0, sumVolume = 0; // записваме общия обем/грамове на всички пратки
    float sumTotal = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Please enter weight(gr): ");
        scanf("%f", &list->gramas);

        printf("Please enter volume(cm): ");
        scanf("%f", &list->volume);

        list->priceVolume = volumeIf((float)list->volume);

        list->priceGramas = gramasIf((float)list->gramas);

        sumGramas += list->gramas;
        sumVolume += list->volume;

        list->total = list->priceVolume + list->priceGramas; // единична крайна цена на една пратка
        printf("\n%d.Price: %.2f\n", i+1, list->total);
        sumTotal += list->total; //общата стойност на всички пратки ако се пратят поотделно
    }
   

    float sumOfAllPackages = gramasIf(sumGramas) + volumeIf(sumVolume);
    printf("Separately price: %.2f\n", sumTotal);
    printf("Together price: %.2f", sumOfAllPackages);

    if (sumOfAllPackages < sumTotal)
    {
        printf("\nIt`s better to send together. The price is %.2f", sumOfAllPackages);
    }
    else
    {
        printf("\nIt`s better to send separately. The price is %.2f", sumTotal);
    }
}

float gramasIf(float gramas)
{
    float priceGramas = 0.0;
    if (gramas <= 20)
    {
        priceGramas = 0.46;
    }
    else if (gramas > 20 && gramas <= 50)
    {
        priceGramas = 0.69;
    }
    else if (gramas > 50 && gramas <= 100)
    {
        priceGramas = 1.02;
    }
    else if (gramas > 101 && gramas <= 200)
    {
        priceGramas = 1.75;
    }
    else if (gramas > 201 && gramas <= 350)
    {
        priceGramas = 2.13;
    }
    else if (gramas > 351 && gramas <= 500)
    {
        priceGramas = 2.44;
    }
    else if (gramas > 501 && gramas <= 1000)
    {
        priceGramas = 3.2;
    }
    else if (gramas > 1001 && gramas <= 2000)
    {
        priceGramas = 4.27;
    }
    else if (gramas > 2001 && gramas <= 3000)
    {
        priceGramas = 5.03;
    }
    return priceGramas;
}
float volumeIf(float volume)
{
    float priceVolume = 0.0;

    if (volume <= 10)
    {
        priceVolume = 0.01;
    }
    else if (volume > 10 && volume <= 50)
    {
        priceVolume = 0.11;
    }
    else if (volume > 50 && volume <= 100)
    {
        priceVolume = 0.22;
    }
    else if (volume > 100 && volume <= 150)
    {
        priceVolume = 0.33;
    }
    else if (volume > 150 && volume <= 250)
    {
        priceVolume = 0.56;
    }
    else if (volume > 250 && volume <= 400)
    {
        priceVolume = 1.50;
    }
    else if (volume > 400 && volume <= 500)
    {
        priceVolume = 3.11;
    }
    else if (volume > 500 && volume <= 600)
    {
        priceVolume = 4.89;
    }
    else if (volume > 600)
    {
        priceVolume = 5.79;
    }
    return priceVolume;
}