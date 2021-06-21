/* Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор. */
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    int i = 0;
    struct date array[10]; /* define array */
    for (i = 0; i < 11; i++)
    {
        printf("Enter day: ");
        scanf("%d", &array[i].day);

        printf("Enter month: ");
        scanf("%d", &array[i].month);

        printf("Enter year: ");
        scanf("%d", &array[i].year);
    }  
    /*                                                        
    struct date array[10] = {[1] = {3, 4, 2020}};             
    struct date array[10] = {[1].month = 4, [1].year = 2020}; 
    */
    return 0;
}
