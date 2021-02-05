/* Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc. */

#include <stdio.h>

int our_strcmp(char *s, char *t);

int main()
{
    char first[] = "abcdse";
    char second[] = "abcdse";

    printf("\nnumber returned by the strcmp function: %d", our_strcmp(first, second));
    return 0;
}

int our_strcmp(char *s, char *t)
{
    int i = 0;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
        return s[i] - t[i];
}