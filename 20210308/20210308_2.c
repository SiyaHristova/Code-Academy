/* Създайте test.txt файл в избрана от вас директория. Сложете 
някакви данни в него на латиница- име, поздрав, брой. Отворете 
файла за редактиране. Внимавайте за мястото, къде поставяте 
файла. Трябва да е там, където е сорс файлът. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "test.txt";

    pfile = fopen(filename, "wt");

    if (pfile == NULL)
        printf("Failed to open % s.\n", filename);

    fwrite("Hallo Name 6", 1, strlen("Test message"), pfile);

    fclose(pfile);
    pfile == NULL;

    if (rename("test.txt", "20210308.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");

    remove("20210308.txt");

    return 0;
}