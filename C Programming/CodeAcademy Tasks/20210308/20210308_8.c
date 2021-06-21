/* Напишете стринг в текстов файл. 
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да 
запишем, вторият параметър е указател към файла, в който ще 
пишем.
Функцията ще записва символи от стринга догато достигне 
терминиращ символ \0, но не го пише в новия файл. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("8.txt", "a");
    char str[50] = "\nThis is a new string!";
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    else
    {
        fputs(str, fp);
        fclose(fp);
        fp = NULL;
    }
    return 0;
}