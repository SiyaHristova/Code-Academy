/* Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint, за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */

#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct rect
{
    struct point pt1;
    struct point pt2;
};
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}
int main()
{
    struct rect screen;
    struct point makepoint(int, int);
    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(15, 15);

    for (int i = screen.pt1.x; i < screen.pt2.x; i++)
    {
        for (int j = screen.pt1.y; j < screen.pt2.y; j++)
        {
            printf("%c", '-');
        }
        printf("\n");
    }

    return 0;
}
