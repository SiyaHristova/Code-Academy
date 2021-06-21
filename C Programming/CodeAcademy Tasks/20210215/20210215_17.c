/* Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема. */

#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "A string to be copied.";
    char string2[100];
    char string3[] =  "I am very good in strings coping!";
    char string4[100];
    memset(string2, '\0', sizeof(string2));
    strcpy(string2, string1);
    printf("%s\n", string2);

    memset(string4, '\0', sizeof(string4));
    strcpy(string4, string3);
    printf("%s\n", string4);
    strcpy(string4, string1);
    printf("%s\n", string4);
    return 0;
}