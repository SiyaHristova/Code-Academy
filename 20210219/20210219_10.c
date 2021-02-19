/*  Направете два триъгълника с отместване */

#include <stdio.h>

struct point
{
    int x;
    int y;
};
struct triangle
{
    struct point start;
    struct point end;
};

struct point makepoint(int x, int y);
void printTriangle();

int main(void)
{
    printTriangle();

    return 0;
}

struct point makepoint(int x, int y)
{
    struct point p;
    p.x = x;
    p.y = y;
    return p;
}
void printTriangle(){
    int x, y, i = 0, j = 0;
    struct triangle start;

    start.start = makepoint(1, 1);

    printf("Final X of the triangle: \n");
    scanf("%d", &x);
    printf("Final Y of the triangle: \n");
    scanf("%d", &y);
    struct triangle end;
    end.end = makepoint(x, y);

    printf("Printing second triangle:\n");
    for (i = start.start.x; i <= end.end.x; i++)
    {
        for (j = start.start.y; j <= i; j++)
        {
            printf("*");
        }
        for (j = start.start.x; j <= end.end.x + 1; j++)
        {
            printf("  ");
        }

        for (j = start.start.y; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}