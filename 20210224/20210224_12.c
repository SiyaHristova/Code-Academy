/* Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
} */

#include <stdio.h>

#define GENERIC_MAX(type)           \
    type type##_max(type a, type b) \
    {                               \
        return a > b ? a : b;       \
    }

GENERIC_MAX(float);
int main(void)
{
    float a = 5.6, b = 9.9;

    float (*p)(float, float);
    p = float_max;

    printf("%.2f\n", p(a, b));
    return 0;
}