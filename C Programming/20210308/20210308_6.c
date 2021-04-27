/* Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем. 
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10], str3[10], str4[10];
    FILE *fp;

    fp = fopen("6.txt", "r");
    // Hello world students today - това са думите във файла
    fscanf(fp, "%s %s %s %s", str1, str2, str3, str4);

    printf("1. string: %s\n", str1);
    printf("2. string: %s\n", str2);
    printf("3. string: %s\n", str3);
    printf("4. string: %s\n", str4);

    fclose(fp);
    fp = NULL;

    return (0);
}