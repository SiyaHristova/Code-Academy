/* .Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата */

#include <stdio.h>

const double pi = 3.14;

double plosht(double r);
int main(void)
{
    double r = 0;
    printf("Please enter r: ");
    scanf("%lf", &r);
    printf("Rezult: %.2lf", plosht(r));
    return 0;
}

double plosht(double r){
    return pi*r*r;
}