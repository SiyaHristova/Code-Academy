/* Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */

#include <stdio.h>

int main(){
    char c[] = "Hello world";
    int len = 0;
    char *p;
    p = c;
    while (*p++)
        len++;
    printf("%d", len);
    
}