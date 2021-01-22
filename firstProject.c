/*Напишете програма, която трябва да отпечатва две таблици една до друга (еквивалентно на таблица с 4 колони), едната за
преобразуване от ярдове в метри, а другата за преобразуване от км в мили. Изходът трябва да използва стойности int, но можете
да използвате коефициенти за преобразуване с плаваща запетая 0,9144 (от ярдове до метри) и 1,609344 от миля до км.

Работех заедно с Гергана и Недялко*/

#include <stdio.h>

int main()
{
    float fYards = 0;
    float fKms = 0;
    unsigned char cChoice = 1;

    while (cChoice == 1)
    {
        printf("\nEnter yards: ");
        scanf("%f", &fYards);

        printf("Enter KMs: ");
        scanf("\n%f", &fKms);
        if (fYards >= 0 && fKms >= 0)
        {
            float fYardsToMeters = fYards * 0.9144;
            float fKmToMiles = fKms * 1.609344;
            printf("\n------------------------------------------\n");
            printf("|  Yards  |  Meters || Kmeters |  Miles  |\n");
            printf("------------------------------------------\n");
            printf("| %7d | %7d || %7d | %7d |\n",
                   (int)fYards, (int)(fYardsToMeters), (int)fKms, (int)(fKmToMiles));
            printf("------------------------------------------\n");
        }
        else
        {
            printf("\nPlease enter only positive numbers\n");
        }
        printf("\nTo continue press 1\nTo stop press 0\n");
        scanf("%d", &cChoice);
    }

    return 0;
}