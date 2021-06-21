/* Напишете програма, която печата съдържанието на файл в обратен 
ред.
Използвайте fseek функцията, за да отидете накрая на файла. 
Използвайте ftell функцията, за да намерите позицията на пойнтера. 
Покажете на екран файла, обърнат в обратен ред. */
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int i, pos;
    fp = fopen("15.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    i = 0;
    while (i < pos)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        ch = fgetc(fp);
        printf("%c", ch);
    }
    return 0;
}