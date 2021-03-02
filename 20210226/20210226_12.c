/* Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int enterWorkers();

typedef struct Worker
{
    int id;
    char name[MAX];
    char middleName[MAX];
    char familyName[MAX];
    char position[MAX];
    int internship;
    float money;
    int chefFamilyName[MAX];
    struct worker *chef;
} worker;

int enterWorkers()
{
    int i = 0;
    worker *firma;
    firma = (struct Worker *)malloc(MAX * sizeof(worker));
    for (i = 0; i < 2; i++)
    {
        printf("\t%d. Worker  informarion: \n", i);

        printf("Please enter name: ");
        scanf("%s", firma->name);
        
        printf("\nPlease enter middle name: ");
        scanf("%s", firma->middleName);

        printf("\nPlease enter family name: ");
        scanf("%s", firma->familyName);

        printf("\nPlease enter position: ");
        scanf("%s", firma->position);

        printf("\nPlease enter internship: ");
        scanf("%d", &firma->internship);

        printf("\nPlease enter Money: ");
        scanf("%f", &firma->money);

        printf("\nPlease select: \nfor chef Andre Tokev press 1\nfor chef Peter Mihalchev press 2:");
        scanf("%d", &firma->chefFamilyName);
        while((firma->chefFamilyName[i] != 1) && (firma->chefFamilyName[i] != 2)){
            printf("\nPlese press 1 or 2!");
            scanf("%d", &firma->chefFamilyName[i]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\t%d. Worker  informarion: ", i);
        printf("\nFirst name: %s", firma->name);

        printf("\nMiddle name: %s", firma->middleName);

        printf("\nFamily name: %s", firma->familyName);

        printf("\nPosition: %s", firma->position);

        printf("\nInternship: %d", firma->internship);

        printf("\nMoney: %.2f", firma->money);

        if(firma->chefFamilyName[i] == 1){
            printf("\n%d worker`s chef is chef Andre Tokev", i);
        }
        else{
            printf("\n%d worker`s chef is chef Peter Mihalchev", i);
        }
    }
    free(firma);
    
}

int main()
{
    enterWorkers();
    return 0;
}