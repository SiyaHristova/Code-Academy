/*  Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct participant
{
    char *name;
    char *familyName;
    int id;
    int age;
} participants;
void menu();

int main(void)
{
    menu();
    return 0;
}
void menu()
{
    participants *participant;
    int choice = 1;
    int flag = 1, count = 0, i;
    FILE *fptr;

    if ((fptr = fopen("17.txt", "wt")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    participant = (participants *)malloc(SIZE * sizeof(participants));
    if (NULL == participant)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    for (i = 0; choice != 2; i++)
    {
        printf("Enter the participant id\n");
        scanf("%d", &participant[i].id);

        printf("Enter the participant name: \n");
        participant[i].name = malloc(20);
        scanf("%s", participant[i].name);

        printf("Enter the participant family name: \n");
        participant[i].familyName = malloc(20);
        scanf("%s", participant[i].familyName);

        printf("Enter the participant age: \n");
        scanf("%d", &participant[i].age);

        count++;

        printf("Press 1 to add new participant or press 2 to exit. \n");
        scanf("%d", &choice);
    }
    for (i = 0; i < count; i++)
    {
        printf("Participant`s ID:%d\n", participant[i].id);
        printf("\tFirst name:%s\n", participant[i].name);
        printf("\tSecond name:%s\n", participant[i].familyName);
        printf("\tAge : %d\n", participant[i].age);
    }
    for (int i = 0; i < count; ++i)
    {
        fprintf(fptr, "ID: %d\tName: %s\tFamilyName: %s\tAge: %d\n", participant[i].id, participant[i].name, participant[i].familyName, participant[i].age);
    }
    free(participant);
    fclose(fptr);
}