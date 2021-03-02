/* Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef. */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;

}Time;

Time addSeconds(Time* time, int second);
Time addMinutes(Time* time, int minutes);
Time addHours(Time* time, int hours);

void printSeconds(Time *time);

Time returnStruct(int second);
Time addStructure(Time *time1, Time *time2);
Time subtractStructure(Time *time1, Time *time2);

void printTime(Time *time);
void printResult();

int main(void){
    
    printResult();

    return 0;
}

Time addSeconds(Time* time,int second){

    time->seconds += second;
    while(time->seconds>=60){
        time->seconds = time->seconds - 60;
        time->minutes++;
        while(time->minutes>=60){
            time->minutes = time->minutes - 60;
            time->hours++;
        }
    }

    return *time;
}

Time addMinutes(Time* time,int minutes){

    time->minutes += minutes;
    while(time->minutes>=60){
        time->minutes = time->minutes - 60;
        time->hours++;
    }
    return *time;
}

Time addHours(Time* time,int hours){
    time->hours += hours;
    return *time;
}

void printSeconds(Time* time){
    printf("Seconds: %d\n",time->seconds);
}

Time returnStruct(int second){
    Time *newSeconds;
    newSeconds->seconds = second;
    newSeconds->minutes = 0;
    newSeconds->hours = 0;

    while(newSeconds->seconds>=60){
        newSeconds->seconds = newSeconds->seconds - 60;
        newSeconds->minutes++;
    }
    return *newSeconds;
}

Time addStructure(Time* time1,Time* time2){
    Time *result;
    result->hours = time1->hours + time2->hours;
    result->minutes = time1->minutes + time2->minutes;
    while(result->minutes>=60){
        result->minutes = result->minutes - 60;
        result->hours++;
    }
    result->seconds = time1->seconds + time2->seconds;
    while(result->seconds>=60){
        result->seconds = result->seconds - 60;
        result->minutes++;
    }
    return *result;
}

Time subtractStructure(Time* time1,Time* time2){
    Time* result;
    if(time1->hours > time2->hours){
        result->hours = time1->hours - time2->hours;
    }
    else{
        result->hours = time2->hours - time1->hours;
    }
    if(time1->minutes > time2->minutes){
        result->minutes = time1->minutes - time2->minutes;
    }
    else{
        result->minutes = time2->minutes - time1->minutes;
    }
    if(time1->seconds > time2->seconds){
        result->seconds = time1->seconds - time2->seconds;
    }
    else{
        result->seconds = time2->seconds - time1->seconds;
    }
    return *result;
}

void printTime(Time *time){
    printf("\tHours: %d\n",time->hours);
    printf("\tMinutes: %d\n",time->minutes);
    printf("\tSeconds: %d\n",time->seconds);
}

void printResult(){
    Time *time1 = NULL;
    time1 = (Time *)malloc(sizeof(Time));
    if (NULL == time1)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }
    time1->seconds = 10;
    time1->minutes = 20;
    time1->hours = 30;
    
    Time *time2 = NULL;
    time2 = (Time*)malloc(sizeof(Time));
    if (NULL == time2)
    {
        printf("Allocation memory error!\n");
        exit(2);
    }
    time2->seconds = 40;
    time2->minutes = 50;
    time2->hours = 55;

    printf("Adding seconds to time1: \n");
    *time1 = addSeconds(time1, 10);
    printSeconds(time1);

    printf("Adding minutes to time1: \n");
    *time1 = addMinutes(time1, 18);
    printTime(time1);

    printf("Adding seconds to time2: \n");
    *time2 = addSeconds(time2, 30);
    printSeconds(time2);

    printf("Adding hours to time1: \n");
    *time1 = addHours(time1, 5);
    printTime(time1);

    Time *structReturn = NULL;
    structReturn = (Time *)malloc(sizeof(Time));
    if (NULL == structReturn)
    {
        printf("Allocation memory error!\n");
        exit(3);
    }

    *structReturn = returnStruct(18);
    printf("Returning structure with 18 seconds:\n");
    printTime(structReturn);

    Time *addResult = (Time *)malloc(sizeof(Time));
    if (NULL == addResult)
    {
        printf("Allocation memory error!\n");
        exit(4);
    }

    *addResult = addStructure(time1,time2);
    printf("Result structure after adding 2 structures: \n");
    printTime(addResult);

    Time *subtractResult = (Time *)malloc(sizeof(Time));
    if (NULL == subtractResult)
    {
        printf("Allocation memory error!\n");
        exit(5);
    }
    *subtractResult = subtractStructure(time1,time2);
    printf("Result structure after subtracting 2 structures:\n");
    printTime(subtractResult);

    free(time1);
    free(time2);
    free(structReturn);
    free(addResult);
    free(subtractResult);
}