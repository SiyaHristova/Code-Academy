//  Литерали

#include <stdio.h>
int main() {
    printf("Character literals: '%c' , '%c' , '%c' \n", '\041', '\x3A', 'Z');
    printf("Integer literals: %d , %d , %ld \n", 123, 0xFFF, 123456789012345ULL);
    printf("Floating-point literals: %lf , %lf , %lg, %lg \n", 1.23, 1234.5678, 123E-12, 123E+28);
    printf("String literals: \"%s\" , \"%s\"\n", "xxx", "yyy", "zzz");
    return 0;
}