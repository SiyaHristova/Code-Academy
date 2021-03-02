/* Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип. */
#include <stdio.h>
int main(){
    typedef long long int num;
    num firstNum = 123456789;
    printf("%lld\n", firstNum);

    typedef num* pNum;
    pNum pFirst = &firstNum;
    printf("\n%lld", *pFirst);

    return 0;
}