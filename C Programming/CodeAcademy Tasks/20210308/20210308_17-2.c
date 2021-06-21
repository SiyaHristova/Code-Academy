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
    FILE *fptr;
    if ((fptr = fopen("17.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

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
    for (int i = 0; i < count; ++i)
    {
        fprintf(fptr, "ID: %d\tName: %s\tFamilyName: %s\tAge: %d\n",id[i], name[i], familyName[i], age[i]);
    }
    fclose(fptr);
    free(name);
    free(familyName);
    free(name[count]);
    free(familyName[count]);
}