/* Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();

int main(void)
{
    menu();
    return 0;
}

void menu()
{

    int id[100], age[100];
    char **name, **familyName, choice, s[100];
    int flag = 1, count = 0, i, j, temp;

    name = (char **)malloc(sizeof(char *));
    if (NULL == name)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    familyName = (char **)malloc(sizeof(char *));
    if (NULL == familyName)
    {
        printf("Allocation memory error!\n");
        exit(2);
    }

    while (flag)
    {
        printf("Enter the id of the participant: ");
        fflush(stdin);
        scanf("%d", &id[count]);

        printf("Enter the name of the participant: ");
        name[count] = (char *)malloc(10);
        if (NULL == name[count])
        {
            printf("Allocation memory error!\n");
            exit(3);
        }
        fflush(stdin);
        gets(name[count]);

        printf("Enter the family name of the participant: ");
        familyName[count] = (char *)malloc(10);
        if (NULL == familyName[count])
        {
            printf("Allocation memory error!\n");
            exit(4);
        }
        fflush(stdin);
        gets(familyName[count]);

        printf("Enter the age of the participant: ");
        fflush(stdin);
        scanf("%d", &age[count]);

        printf("Do you want to continue entering a participants? Press 'y' to continue or 'n' to stop\n");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'n')
        {
            for (i = 0; i <= count; i++)
            {
                for (j = i + 1; j <= count; j++)
                {
                    if (strcmp(name[i], name[j]) > 0)
                    {
                        strcpy(s, name[i]);
                        strcpy(name[i], name[j]);
                        strcpy(name[j], s);

                        strcpy(s, familyName[i]);
                        strcpy(familyName[i], familyName[j]);
                        strcpy(familyName[j], s);

                        temp = id[i];
                        id[i] = id[j];
                        id[j] = temp;

                        temp = age[i];
                        age[i] = age[j];
                        age[j] = temp;
                    }
                }
            }

            printf("Your list of participants is: \n");
            for (i = 0; i <= count; i++)
            {
                printf("ID: %d\n", id[i]);
                printf("    Name: %s\n", name[i]);
                printf("    Family: %s\n", familyName[i]);
                printf("    Age: %d\n", age[i]);
            }
            flag = 0;
        }
        count++;
    }
    free(name);
    free(familyName);
    free(name[count]);
    free(familyName[count]);
}