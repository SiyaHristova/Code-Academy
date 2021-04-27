/* Напишете програма, която премахва от файл номер на ред и 
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а 
запишете съдържанието на файла без конкретния ред в друг файл). */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 256

int main()
{
    int line, ctr = 0;
    char ch;

    FILE *fptr1, *fptr2;

    char str[MAX];
    printf("\n\n Delete a specific line from a file :\n");
    printf("-----------------------------------------\n");

    fptr1 = fopen("16-original.txt", "r");
    if (!fptr1)
    {
        printf("Error!\n");
        exit(1);
    }
    fptr2 = fopen("16-copy.txt", "w"); // open the temporary file in write mode
    if (!fptr2)
    {
        printf("Error!\n");
        exit(2);
    }
    printf("Which line you want to remove: ");
    scanf("%d", &line);
    line++;
    while (!feof(fptr1))
    {
        strcpy(str, "\0");
        fgets(str, MAX, fptr1);
        if (!feof(fptr1))
        {
            ctr++;

            if (ctr != line)
            {
                fprintf(fptr2, "%s", str);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    fptr1 = fopen("16-copy.txt", "r");
    ch = fgetc(fptr1);
    printf("Now the content of the file %s is: \n", "16-copy.txt");
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fptr1 = NULL;
    return 0;
}
