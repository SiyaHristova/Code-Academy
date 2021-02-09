/* Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. */

#include <stdio.h>
int iDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dayOfYear(int day, int month, int year);
int main(void)
{
    int day = 0, month = 0, year = 0;
    printf("Please enter a day: ");
    scanf("%d", &day);

    printf("Please enter a month: ");
    scanf("%d", &month);

    printf("Please enter a year: ");
    scanf("%d", &year);
    printf("%d", dayOfYear(day, month, year));

    return 0;
}
int dayOfYear(int day, int month, int year)
{
    if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        ++day;
    }
    while (month-- > 0)
    {
        day = day + iDays[month - 1];
    }
    return day;
}