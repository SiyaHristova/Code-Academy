/* .Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме търсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е по-малък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива. */

#include <stdio.h>

int binarySearch(int a[], int n, int x);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 0;
    printf("Enter a number to search: \n");
    scanf("%d", &x);
    
    printf("Index: %d\n", binarySearch(arr, n, x));

    return 0;
}

int binarySearch(int a[], int n, int x)
{
    int mid = 0, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < a[mid])
            high = mid + 1;
        else if (x > a[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}