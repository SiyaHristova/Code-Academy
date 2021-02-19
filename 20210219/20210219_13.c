/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/

#include <stdio.h>
#include <stdlib.h>
#define size 50

struct Owner
{
    char ownerName[size];
    char ownerFamilyName[size];
};

struct Worker
{
    int id;
    char workerName[size];
    char workerMidname[size];
    char workerFamilyName[size];
    char workerPosition[size];
    int workerExperince;
    float workerSalary;
    struct Owner p;
};

struct Worker fillArray(struct Worker workers[10]);
void printArray(struct Worker workers[10]);

int main()
{

    struct Worker workers[10];
    fillArray(workers);
    printArray(workers);

    return 0;
}

struct Worker fillArray(struct Worker workers[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter worker's number: \n");
        scanf("%d", &workers[i].id);

        printf("Enter worker's name: \n");
        scanf("%s", workers[i].workerName);

        printf("Enter worker's midname: \n");
        scanf("%s", workers[i].workerMidname);

        printf("Enter worker's family name: \n");
        scanf("%s", workers[i].workerFamilyName);

        printf("Enter worker's position: \n");
        scanf("%s", workers[i].workerPosition);

        printf("Enter worker's work experience: \n");
        scanf("%d", &workers[i].workerExperince);

        printf("Enter worker's salary: \n");
        scanf("%f", &workers[i].workerSalary);
        fflush(stdin);
        printf("Enter worker's boss name: \n");
        gets(workers[i].p.ownerName);
        fflush(stdin);

        printf("Enter worker's boss family: \n");
        gets(workers[i].p.ownerFamilyName);
    }
}

void printArray(struct Worker workers[10])
{
    int i;
    printf("\nWorker's list: \n");
    for (i = 0; i < 10; i++)
    {
        printf("ID: %d \n", workers[i].id);
        printf("Name: %s\n",workers[i].workerName);
        printf("Midname: %s\n", workers[i].workerMidname);
        printf("Family name: %s\n ", workers[i].workerFamilyName);
        printf("Position: %s\n", workers[i].workerPosition);
        printf("Work Experience: %d\n", workers[i].workerExperince);
        printf("Salary: %.2f\n", workers[i].workerSalary);
        printf("Boss Name: %s\n", workers[i].p.ownerName);
        printf("Boss Family: %s\n", workers[i].p.ownerFamilyName);
    }
}