/* Напишете стандартната програма за Linux cat , която приема като 
аргументи от командния ред имена на файлове и изкарва съдържанието 
им на стандартния изход. Ако на програмата не са подадени никакви 
аргументи, то тя да изкара съдържанието подадено от стандартния вход 
на стандартния изход */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch;
    char fileName[20];
    printf("Please enter txt file name: ");
    scanf("%s", fileName);
    strcat(fileName, ".txt");

    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    ch = fgetc(fp);
    printf("The content of the file %s is: \n", fileName);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}