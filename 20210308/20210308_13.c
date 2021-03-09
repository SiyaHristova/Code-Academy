/* Напишете програма, която да намери общия брой на 
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст. 
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да 
брои броя на редовете. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("13.txt", "r");
    int lines;
    char ch;
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch == '\n')
        {
            lines++;
        }
    }
    printf("%d", lines);
    fclose(fp);
    fp = NULL;
    return 0;
}