/*  Направете функця add(), която събира две точки. */

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
struct point addpoint(struct point p1, struct point p2){
    struct point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y; 
    return result;
}
int main()
{
    struct rect screen;
    struct point result;
    
    screen.pt1 = makepoint(10, 30);
    screen.pt2 = makepoint(60, 30);
    result = addpoint(screen.pt1, screen.pt2);
    printf("Sum x = %d", result.x);
    printf("\nSum y = %d", result.y);

    return 0;
}
