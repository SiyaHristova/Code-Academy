/* Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t */
#include <stdio.h>
#define swap(t, x, y){ \
        t i = x; \
        x = y;   \
        y = i;    \
        }
int main(){
    char cFirst = 'a';
    char cSecond = 'b';
    printf("First letter: %c, Second letter: %c", cFirst, cSecond);
    swap(char, cFirst, cSecond);
    printf("\nFirst letter: %c, Second letter: %c", cFirst, cSecond);
    return 0;
}