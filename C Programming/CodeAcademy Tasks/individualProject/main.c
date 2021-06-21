#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Напишете програма KR.EXE, която въвежда от клавиатурата два низа, съставени от главни латински букви,
всеки с дължина най-много 15 знака.
Ако двата низа имат поне една обща буква, програмата трябва да отпечата хоризонтално на екрана първия от
низовете, а втория – вертикално, без да има празни позиции между буквите им, така че двата низа да се пресекат
там, където общата буква се среща за първи път и в двата низа.
Ако двата низа нямат нито една обща буква, тогава вашата програма трябва да отпечата хоризонтално първия низ,
а от позицията, непосредствено намираща се под позицията следваща след последната буква на първия низ – да
отпечата вертикално надолу втория низ.
/Национална олимпиада по информатика 4.–6.клас Втори кръг 17.03.2002г/
Пример:
1. Въвеждаме KLAVIATURA и MONITOR
Възможен вид на изхода: 
  М
  О
  N
KLAVIATURA
  Т
  О
  R
2. Въвеждаме КОТКА и PILE.
Вид на изхода: 
КОТКА
     Р
     I   
     L
     Е */
void word()
{
    FILE *fp;
    if ((fp = fopen("test.txt", "a")) == NULL)
    {
        printf("Failed to open the file\n");
        printf("Error %d -> %s\n", errno, strerror(errno));
        exit(1);
    }
    char *firstWord, *secondWord;
    firstWord = (char *)malloc(15 * sizeof(firstWord));
    secondWord = (char *)malloc(15 * sizeof(secondWord));

    printf("Enter the first word: ");
    scanf("%s", firstWord);
    printf("Enter the second word: ");
    scanf("%s", secondWord);

    int i, j, x = -1, y = -1, k;
    int fisrstLen = strlen(firstWord);
    int secondLen = strlen(secondWord);
    for (i = 0; i < fisrstLen; i++)
    {
        for (j = 0; j < secondLen; j++)
        {
            if (firstWord[i] >= 97 && firstWord[i] <= 122)
            {
                firstWord[i] = firstWord[i] - 32;
            }
            if (secondWord[j] >= 97 && secondWord[j] <= 122)
            {
                secondWord[j] = secondWord[j] - 32;
            }

            if (firstWord[i] == secondWord[j])
                if ((x == -1) && (y == -1))
                {
                    x = i;
                    y = j;
                }
        }
    }
    fprintf(fp, "First word: %s", firstWord);
    fprintf(fp, "\nSecond word: %s\n", secondWord);
    if (x != -1)
    {
        for (i = 0; i < secondLen; i++)
        {

            if (i == y)
            {
                fprintf(fp, "%s\n", firstWord);
            }
            else
            {
                for (k = 0; k < x; k++)
                    fprintf(fp, " ");
                fprintf(fp, "%c\n", secondWord[i]);
            }
        }
    }
    else
    {
        fprintf(fp, "%s\n", firstWord);
        for (i = 0; i < secondLen; i++)
        {
            for (k = 0; k < fisrstLen; k++)
                fprintf(fp, " ");
            fprintf(fp, "%c\n", secondWord[i]);
        }
    }

    free(firstWord);
    free(secondWord);
    fclose(fp);
}

void menu()
{
    char answer;
menu:
    printf("Menu\n");
    printf("1 - new crossword \n");
    printf("2 - Exit \n");
    scanf("%d", &answer);

    switch (answer)
    {
    case 1:
        word();
        printf("\nDo you want to add new? (please press 1 or 2)\n");
        scanf("%c", &answer);
        if (answer == 'y')
        {
            printf("Thank you for using this generator\n");
            break;
        }
        else
        {
            goto menu;
        }
    case 2:
        printf("Have a nice day!");
        exit(0);
    default:
        printf("Error! Operator is not correct");
        goto menu;
    }
}
int main()
{
    menu();
    return 0;
}