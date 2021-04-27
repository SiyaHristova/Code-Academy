/* Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
първият параметър е стринг, вторият параметър е брой символи, който 
искаме да прочетем, освен ако не стигне терминиращия символ за край 
на реда \n или \0 първо, третият е пойнтер към файла; */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("4.txt", "rt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    char str[10];
    if (fgets(str, 10, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}