/* Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата. */

#include <stdio.h>
struct bitDate
{
    int date : 8;
    int month : 8;
    int year : 20;
};
struct date
{
    int date;
    int month;
    int year;
};
void printValue();
void checkDate(struct bitDate *contractdate);

int main()
{
    struct bitDate *contractdate, newvariable = {17, 56, 2000};
    contractdate = &newvariable;
    printValue(&newvariable);
    checkDate(&newvariable);
    return 0;
}
void printValue(struct bitDate *contractdate)
{
    printf("Date: %d\nMonth: %d\nYear: %d\n", contractdate->date, contractdate->month, contractdate->year);
}
void checkDate(struct bitDate *contractdate)
{
    if ((contractdate->date) < 0 || (contractdate->date) >= 31)
    {
        printf("\nInvalid date\n");
    }
    if ((contractdate->month) < 0 || (contractdate->month) > 13)
    {
        printf("\nInvalid month\n");
    }
    if((contractdate->year) < 0){
        printf("\nInvalid year\n");
    }
}