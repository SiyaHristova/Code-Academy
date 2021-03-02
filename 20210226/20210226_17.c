/* Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define size 5
 
typedef struct melon{
    float diametar_melon;
    float debelina_melon;
}dinq;
 
typedef struct pump{
    float diametar_pump;
    float debelina_pump;
}dinka;
 
void fill();
 
int main (void){
 
    fill();
 
    return 0;
}
 
void fill(){
    srand(time(NULL));
    int i;
    float avg_melon_debelina=0;
    float avg_melon_diametar=0;
    float avg_pump_debelina=0;
    float avg_pump_diametar=0;
    float avg_melon;
    float avg_pump;
 
    dinq *A;
    A = (dinq *)malloc(sizeof(dinq));
    dinka *B;
    B = (dinka *)malloc(sizeof(dinka));
    for(i=0;i<size;i++){
         
        A[i].diametar_melon= (rand() % 125) + 15;
        A[i].debelina_melon = (((float)rand() / RAND_MAX) * (0.5 - 3.5) + 3.5);
        avg_melon_diametar=A[i].diametar_melon+avg_melon_diametar;
        avg_melon_debelina=A[i].debelina_melon+avg_melon_debelina;
        printf("A[%d]: Diameter: %.0f  Peel: %.2f\n",i,A[i].diametar_melon,A[i].debelina_melon);
    }
    avg_melon_diametar=avg_melon_diametar/size;
    avg_melon_debelina=avg_melon_debelina/size;
    avg_melon=avg_melon_diametar+avg_melon_debelina;
 
    printf("AVG Melon Diametar: %.2f\n",avg_melon_diametar);
    printf("AVG Melon Kora: %.2f\n\n",avg_melon_debelina);
 
    for(i=0;i<size;i++){
        B[i].diametar_pump=(rand() % 60) + 35;
        B[i].debelina_pump=(((float)rand() / RAND_MAX) * (0.3 - 0.9) + 0.9);
        avg_pump_diametar=(B[i].diametar_pump+avg_pump_diametar);
        avg_pump_debelina=B[i].debelina_pump+avg_pump_debelina;
        printf("B[%d]: Diameter: %.0f  Peel: %.2f\n",i,B[i].diametar_pump,B[i].debelina_pump);
    }
    avg_pump_diametar=avg_pump_diametar/size;
    avg_pump_debelina=avg_pump_debelina/size;
    avg_pump=avg_pump_debelina+avg_pump_diametar;
    printf("AVG Pump Diameter: %.2f\n",avg_pump_diametar);
    printf("AVG Pump Kora: %.2f\n\n",avg_pump_debelina);
 
    if(avg_melon>avg_pump){
        printf("It is better to buy watermelon(melon) with a diameter %.2f and peel %f instead of B watermelon (pumpkin) with a diameter of %.2f and peel %f\n",avg_melon_diametar,avg_melon_debelina,avg_pump_diametar,avg_pump_debelina);
    }else{
        printf("It is better to buy watermelon(pumpkin) with a diameter %.2f and peel %f instead of B watermelon (melon) with a diameter of %.2f and peel %f\n",avg_pump_diametar,avg_pump_debelina,avg_melon_diametar,avg_melon_debelina);
    }
    free(A);
    free(B);
}