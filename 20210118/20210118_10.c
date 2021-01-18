// Оператори за присвояване
#include <stdio.h>
int main()
{
    int nResult = 10;
    int nX = 6;  // = оператор за присвояване
    printf("Result = %d\n", nResult);

    nResult *= nX;  // умножение с присвояване
    printf("Result *= %d -> %d\n", nX, nResult);

    nResult /= nX;  // деление с присвояване
    printf("Result /= %d -> %d\n", nX, nResult);

    nResult %= nX; // деление с остатък с присвояване
    printf("Result %%= %d -> %d\n", nX, nResult);

    nResult += nX;  // събиране с присвояване
    printf("Result += %d -> %d\n", nX, nResult);

    nResult -= nX;  // изваждане с присвояване
    printf("Result -= %d -> %d\n", nX, nResult);

    nResult = 1;
    nResult <<= nX;  // преместване наляво с присвояване 
    printf("Result <<= %d -> %d\n", nX, nResult);

    nResult = 1;
    nResult >>= nX; // преместване надясно с присвояване
    printf("Result >>= %d -> %d\n", nX, nResult);

    nResult &= nX;  // побитово И с присвояване 
    printf("Result &= %d -> %d\n", nX, nResult);
    
    nResult ^= nX;  // побитово изключващо ИЛИ с присвояване
    printf("Result ^= %d -> %d\n", nX, nResult);

    return 0;
} /* използвайте и други оператори за присвояване */
