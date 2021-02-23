/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs */

#include <stdio.h>
#include <stdlib.h>

enum state
{
    one = 1,
    two = 2,
    three = 3,
    four = 4,
    five = 5,
    six = 6,
    seven = 7,
    eight = 8,
    nine = 9,
    ten = 10,
    eleven = 11,
    twelve = 12,
    thirteen = 13,
    fourteen = 14,
    fifteen = 15,
    sixteen = 16,
    seventeen = 17,
    eighteen = 18,
    nineteen = 19,
    twenty = 20
};
struct variables
{
    int i;
    char text[10];
    double dVar;
    enum state e;
};
int writeToFile(struct variables array[], char const *fileName);
int main(void)
{
    struct variables var[20] = {[0] = {1, "Start", 7.8, one}, 
                                [1] = {2, "TEXT", 6.9, two}, 
                                [2] = {3, "TEXT", 9.8, three}, 
                                [3] = {4, "TEXT", 6.8, four}, 
                                [4] = {5, "TEXT", 9.1, five}, 
                                [5] = {6, "TEXT", 5.9, six}, 
                                [6] = {7, "TEXT", 10.6, seven}, 
                                [7] = {8, "TEXT", 15.9, eight}, 
                                [8] = {9, "TEXT", 55.1, nine}, 
                                [9] = {10, "TEXT", 85.6, ten}, 
                                [10] = {11, "TEXT", 5.7, eleven}, 
                                [11] = {12, "TEXT", 11.1, twelve}, 
                                [12] = {13, "TEXT", 15.5, thirteen}, 
                                [13] = {14, "TEXT", 55.1, fourteen}, 
                                [14] = {15, "TEXT", 17.8, fifteen}, 
                                [15] = {16, "TEXT", 19.9, sixteen}, 
                                [16] = {17, "TEXT", 11.6, seventeen}, 
                                [17] = {18, "TEXT", 15.8, eighteen}, 
                                [18] = {19, "TEXT", 5.9, nineteen}, 
                                [19] = {20, "End", 99.75, twenty}};
    if (writeToFile(var, "structs.cvs") == 0)
    {
        printf("Successfully writen to file\n");
    }
    else
    {
        printf("Failed to write to file\n");
    }
}
int writeToFile(struct variables array[], char const *fileName)
{
    int i;
    FILE *fp;
    fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        printf("Failed to create a file\n");
        return 1;
    }
    for (i = 0; i < 20; i++)
    {
        fprintf(fp, "%d, %s, %.2lf, %d\n", (array + i)->i, (array + i)->text, (array + i)->dVar, (array + i)->e);
    }
    fclose(fp);
    return 0;
}