/* Напишете функция, която изчислява произведението на
числата от 1 до 30 */

#include <stdio.h>

void Faktorial();

int main()
{
    Faktorial();
}
void Faktorial()
{
    unsigned int i, fact = 1;
    for (i = 1; i <= 30; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of 30 is: %d", fact);
}
