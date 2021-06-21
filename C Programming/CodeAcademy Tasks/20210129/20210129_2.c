/*  Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */

#include <stdio.h>

const double pi = 3.14;

float area();
int main(void)
{
    printf("Rezult: %.2lf", area());
    return 0;
}

float area()
{
    double r = 0;
    printf("Enter a radius: ");
    scanf("%lf", &r);
    return pi*r*r;
}