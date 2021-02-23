/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина. */
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void printValue();

int main()
{

    printValue();
 
    return 0;
}
void printValue()
{
    struct date *contractdate, newvariable; // newvariable = {17, 16, 2000};
    contractdate = &newvariable;
    contractdate->day = 1;
    contractdate->month = 2;
    contractdate->year = 2001;

    printf("Enter day: ");
    scanf("%d", &contractdate->day);

    printf("Enter month: ");
    scanf("%d", &contractdate->month);

    printf("Enter year: ");
    scanf("%d", &contractdate->year);
    
    printf("\n\nResult:");
    if (((contractdate->day) < 0 || (contractdate->day) >= 31) || ((contractdate->month) < 0 || (contractdate->month) > 13) || (contractdate->year) < 0)
    {
        printf("\nInvalid date\n");
    }
    else
        printf("\nDate: %d\nMonth: %d\nYear: %d\n", contractdate->day, contractdate->month, contractdate->year);
}