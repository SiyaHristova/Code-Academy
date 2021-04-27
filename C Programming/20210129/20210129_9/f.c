#include "p.h"

void sum(int a,int b){
    int result = a + b;
    printf("\nResult of the first function(sum): %d\n",result);
    multiply(a,b);
}
void multiply(int a,int b){
    int multiply = a*b;
    printf("\nResult of the second function(multiply): %d \n",multiply);
    multiplyAB(a,b);
}
void multiplyAB(int a,int b){
    int multiplyAB = (a+b)*(a+b);
    printf("\nResult of the third function((a+b)*(a+b)): %d \n\n",multiplyAB);
}