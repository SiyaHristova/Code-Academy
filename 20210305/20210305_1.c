/* За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    unsigned int longWoodenBoards;
    unsigned int shortWoodenBoards;
    unsigned int bigBrackets;
    unsigned int smallBrackets;
    unsigned int screw;
} Material;

void printRes();
int enterNum(Material *list);
int checksIf(Material *list);

int main()
{
    printRes();
    return 0;
}

void printRes()
{
    Material *list = (Material *)malloc(sizeof(Material));
    list->longWoodenBoards = 0;
    list->shortWoodenBoards = 0;
    list->bigBrackets = 0;
    list->smallBrackets = 0;
    list->screw = 0;

    while (list->longWoodenBoards <= 4 || list->shortWoodenBoards <= 6 || list->bigBrackets <= 2 || list->smallBrackets <= 12 || list->screw <= 14)
    {
        enterNum(list);
        if (list->longWoodenBoards >= 4 && list->shortWoodenBoards >= 6 && list->bigBrackets >= 2 && list->smallBrackets >= 12 && list->screw >= 14)
        {
            checksIf(list);
        }
        else
        {
            printf("\nInvalid numbers!\n");
        }
    }
    free(list);
}

int enterNum(Material *list)
{
    printf("Please enter how many long wooden boards you have: ");
    scanf("%d", &list->longWoodenBoards);

    printf("Please enter how many short wooden boards you have: ");
    scanf("%d", &list->shortWoodenBoards);

    printf("Please enter how many small brackets you have: ");
    scanf("%d", &list->smallBrackets);

    printf("Please enter how many big brackets you have: ");
    scanf("%d", &list->bigBrackets);

    printf("Please enter how many screw you have: ");
    scanf("%d", &list->screw);
}
int checksIf(Material *list)
{
    int a = floor(list->longWoodenBoards / 4);
    int b = floor(list->shortWoodenBoards / 6);
    int c = floor(list->bigBrackets / 2);
    int d = floor(list->smallBrackets / 12);
    int e = floor(list->screw / 14);

    if ((a < b) && (a < c) && (a < d) && (a < e))
    {
        printf("With %d long woodBoards, %d short woodenBoards, %d small Brackets, %d big Brackets and %d screws, You can make %d shelves", list->longWoodenBoards,
               list->shortWoodenBoards, list->smallBrackets, list->bigBrackets, list->screw, a);
    }
    else if ((b < a) && (b < c) && (b < d) && (b < e))
    {
        printf("With %d long woodBoards, %d short woodenBoards, %d small Brackets, %d big Brackets and %d screws, You can make %d shelves", list->longWoodenBoards,
               list->shortWoodenBoards, list->smallBrackets, list->bigBrackets, list->screw, b);
    }
    else if ((c < a) && (c < b) && (c < d) && (c < e))
    {
        printf("With %d long woodBoards, %d short woodenBoards, %d small Brackets, %d big Brackets and %d screws, You can make %d shelves", list->longWoodenBoards,
               list->shortWoodenBoards, list->smallBrackets, list->bigBrackets, list->screw, c);
    }
    else if ((d < a) && (d < b) && (d < c) && (d < e))
    {
        printf("With %d long woodBoards, %d short woodenBoards, %d small Brackets, %d big Brackets and %d screws, You can make %d shelves", list->longWoodenBoards,
               list->shortWoodenBoards, list->smallBrackets, list->bigBrackets, list->screw, d);
    }
    else
    {
        printf("With %d long woodBoards, %d short woodenBoards, %d small Brackets, %d big Brackets and %d screws, You can make %d shelves", list->longWoodenBoards,
               list->shortWoodenBoards, list->smallBrackets, list->bigBrackets, list->screw, e);
    }
}