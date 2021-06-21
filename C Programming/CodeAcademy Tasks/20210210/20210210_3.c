/* Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I? */

#include <stdio.h>
int pallindrome(char arr[], int n)
{
    int i, j, flag = 0;

    for (i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Array is not pallindrome\n");
    else
        printf("Array is pallindrome\n");
}
int main(int argc, char const *argv[])
{
    char arr[] = {'a', 'b', 'b', 'a'};
    int n = sizeof(arr) / sizeof(arr[0]);
    pallindrome(arr, n);
    return 0;
}