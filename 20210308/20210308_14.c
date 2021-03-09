/* Напишете програма, която да обръща всички символи в 
текстов файл, с главни букви запишете резултата в друг 
временен файл. След това преименувайте новия файл 
с името на оригиналния файл и изтрийте временното 
име. Отпечатайте съдържанието на файл на 
стандартния изход с главни букви. */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *fp, *fp1;
    char ch;
    fp = fopen("original.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file.\n");
        exit(1);
    }
    fp1 = fopen("copy.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error in creating copy file.\n");
        exit(2);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
        }
        putc(ch, fp1);
    }
    fclose(fp);
    fclose(fp1);
    fp = NULL;

    remove("original.txt");
    fp1 = fopen("copy.txt", "r");
    rename("copy.txt", "original.txt");
    if (fp1 == NULL)
    {
        printf("Error in opening file.\n");
        exit(3);
    }
    printf("Content of file\n");
    while ((ch = getc(fp1)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp1);
    fp1 = NULL;

    return 0;
}