/*  Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */
#include <stdio.h>

typedef int(*pFunSum) (int, int);

int funSum(int firstNum, int secondNum){
    return (firstNum + secondNum);
}
int main(){
    pFunSum pFun = NULL;
    pFun = funSum;

    printf("Sum(5+6): %d\n", pFun(5,6));

    return 0;
}