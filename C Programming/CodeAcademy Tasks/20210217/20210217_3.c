/*  Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */

#include <stdio.h>

int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMulti(int nA, int nB) { return (nA * nB); }
int fnDiv(int nA, int nB)   { return (nA / nB); }

int main() {
    int iFirstNumber = 0;
    int iSecondNumber = 0;
    printf("Please select an operation from below:\n");
    printf("1. Plus\n");
    printf("2. Minus\n");
    printf("3. Multiplication\n");
    printf("4. Devide\n");
    int choice = 0;
    scanf("%d", &choice);
    printf("first: ");
    scanf("%d", &iFirstNumber);

    printf("second: ");
    scanf("%d", &iSecondNumber);

    int (*func_ptr[])(int, int) = {fnPlus, fnMinus, fnMulti, fnDiv};
    printf("Result: %d", (*func_ptr[choice-1])(iFirstNumber, iSecondNumber));
}
