/* Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита.
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1). */

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct firstBitStruct
{
    short int iFirstVal : 3;
    char cFirstValue : 6;
};

struct secondBitStruct
{
    char cSecondVal;
    char cThVal;
    short int iSecondVal;
    short int iThVal;
};

void printElements(struct firstBitStruct test);
void printResult();

int main(void)
{
    printResult();

    return 0;
}

void printElements(struct firstBitStruct test)
{
    printf("Short int: %hu\n", test.iFirstVal);
    printf("Char: %c\n", test.cFirstValue);
}
void printResult()
{
    struct firstBitStruct bitTest;
    bitTest.iFirstVal = 7;
    bitTest.cFirstValue = 'c'; /* Променя стойноста от 99 (c) до -29 (y) / причината е преливане на типа */
    printElements(bitTest);
    printf("Size of bitStruct: %d\n", sizeof(bitTest)); /* Когато използваме #pragma pack(1) - Големината на структурата е 3 бита,
                                                            а без препроцесора е 4 бита. */

    struct secondBitStruct secondBitTest;
    printf("Size of bitStruct1 with four types: %d\n", sizeof(secondBitTest)); /* Големината се увеличава с 2 бита, когато са подредени
     принтира  warning: overflow in conversion from 'int' to 'signed char:6' changes value from '99' to '-29' [-Woverflow]
     bitTest.cFirstValue = 'c'; // ð) ð┤ð¥ -29 (y) / ð┐Ð01;35m^~~, тъй като типа прелива 
}