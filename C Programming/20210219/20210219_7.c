/* Направете функция struct point makepoint(int x, int y), която
създава две точки. */
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
    screen.pt1 = makepoint(10, 20);
    screen.pt2 = makepoint(30, 40);
    return 0;
}
