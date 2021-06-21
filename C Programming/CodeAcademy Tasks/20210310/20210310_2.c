/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char fileName[20];
    printf("Please enter c file name: ");
    scanf("%s", fileName);
    strcat(fileName, ".c");

    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    fp = fopen(fileName, "r");

    int lineCount = 1;
    int curlyBracketsOpened = 0, curlyBracketsClosed = 0;
    int bracketOpened = 0, bracketsClosed = 0;
    int straightbracketOpened = 0, straightbracketClosed = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '{')
        {
            curlyBracketsOpened++;
        }
        if (ch == '}')
        {
            curlyBracketsClosed++;
        }
        if (ch == '(')
        {
            bracketOpened++;
        }
        if (ch == ')')
        {
            bracketsClosed++;
        }
        if (ch == '[')
        {
            straightbracketOpened++;
        }
        if (ch == ']')
        {
            straightbracketClosed++;
        }

        if (ch == '\n')
        {
            if (curlyBracketsOpened != curlyBracketsClosed)
            {
                if (curlyBracketsOpened > curlyBracketsClosed)
                {
                    printf("Missing closing curly brackets on line %d\n", lineCount);
                    curlyBracketsClosed = 0;
                    curlyBracketsOpened = 0;
                }
                else if (curlyBracketsOpened < curlyBracketsClosed)
                {
                    printf("Missing opening curly brackets on line %d\n", lineCount);
                    curlyBracketsClosed = 0;
                    curlyBracketsOpened = 0;
                }
            }
            if (bracketOpened != bracketsClosed)
            {
                if (bracketOpened > bracketsClosed)
                {
                    printf("Missing closing brackets on line %d\n", lineCount);
                    bracketOpened = 0;
                    bracketsClosed = 0;
                }
                else if (bracketOpened < bracketsClosed)
                {
                    printf("Missing opening brackets on line %d\n", lineCount);
                    bracketOpened = 0;
                    bracketsClosed = 0;
                }
            }
            if (straightbracketOpened != straightbracketClosed)
            {
                if (straightbracketOpened > straightbracketClosed)
                {
                    printf("Missing closing straight brackets on line %d\n", lineCount);
                    straightbracketClosed = 0;
                    straightbracketOpened = 0;
                }
                else if (straightbracketOpened < straightbracketClosed)
                {
                    printf("Missing opening straight brackets on line %d\n", lineCount);
                    straightbracketClosed = 0;
                    straightbracketOpened = 0;
                }
            }
            lineCount++;
        }
    }
    fclose(fp);
    fp = NULL;
    return 0;
}