/* Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long 
int, който отговаря на позицията във файла.
Дефинирате променлива 
long fpos = ftell(pfile) 
Променливата съхранява текущата ви позицията в байтове от 
началото на файла и вие можете да се върнете на нея по всяко 
време */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("10.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    long fpos = ftell(fp);

    fclose(fp);
    fp = NULL;
    printf("Total size = %d", fpos);

    return 0;
}