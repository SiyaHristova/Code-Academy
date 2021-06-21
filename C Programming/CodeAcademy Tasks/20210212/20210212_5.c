/*  Разширяване на заделена памет с realloc */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p;
    int n1, n2;
    n1 = 15;
    n2 = 22;
    p = (char *)malloc(n1);
    if(NULL == p){
        printf("Allocation memory error!\n");
        exit(1);
    }
    strcpy(p, "C programming");
    p = (char *)realloc(p, n2);
    if(NULL == p){
        printf("Allocation memory error!\n");
        exit(2);
    }
    strcat(p, " is fun");
    printf("%s\n", p);
    free(p);
    return 0;

}
