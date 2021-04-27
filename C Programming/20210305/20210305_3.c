/* С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1: 968 = 9*0.5
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float temperaturePeak;
    float temperatureHut;
    float heighHut;
    float heighPeak;

} info;
void menu();
int main()
{
    menu();
    return 0;
}
void menu()
{
    info *temperature = (info *)malloc(sizeof(info));
    float distance = 0;
    int choice = 0;
    printf("What temperature do you know?\nPress 1 to find peak`s temperature\tPress 2 to find hut`s temperature\n");
    scanf("%d", &choice);
    while (choice != 1 || choice != 2)
    {
        if (choice == 1)
        {
            printf("Please enter temperarure of the Hut: ");
            scanf("%f", &temperature->temperatureHut);

            printf("\nPlease enter heigh of the Hut: ");
            scanf("%f", &temperature->heighHut);

            printf("\nPlease enter heigh of the Peak: ");
            scanf("%f", &temperature->heighPeak);
            distance = floor((temperature->heighPeak - temperature->heighHut) / 100);
            temperature->temperaturePeak = temperature->temperatureHut - (distance * 0.5);

            printf("If the atmospheric pressure is normal and the temperature of the hut is %.2f C, up to the temperature of the peak is %.2f C.", temperature->temperatureHut, temperature->temperaturePeak);

            break;
        }
        else if (choice == 2)
        {
            printf("Please enter temperarure of the peak: ");
            scanf("%f", &temperature->temperaturePeak);

            printf("\nPlease enter heigh of the peak: ");
            scanf("%f", &temperature->heighPeak);

            printf("\nPlease enter heigh of the Hut: ");
            scanf("%f", &temperature->heighHut);

            distance = floor((temperature->heighPeak - temperature->heighHut) / 100);
            temperature->temperatureHut = temperature->temperaturePeak + (distance * 0.5);

            printf("If the atmospheric pressure is normal and the temperature of the peak is %.2f C, up to the temperature of the hut is %.2f C.", temperature->temperaturePeak, temperature->temperatureHut);
            break;
        }
        else
        {
            printf("\nInvalid number!\nPress 1 to find peak`s temperature\tPress 2 to find hut`s temperature\n");
            scanf("%d", &choice);
        }
    }
    free(temperature);
}
