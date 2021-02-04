/* .Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1. */

#include <stdio.h>

int linSearch(int a[], int l, int d);

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int l = sizeof(a)/sizeof(a[0]);
    int d = 0;

    printf("Enter an element to search: \n");
    scanf("%d", &d);

    printf("Index of the element: %d", linSearch(a,l,d));

    return 0;
}

int linSearch(int a[], int l, int d){
    for(int i = 0; i < l; i++){
        if(a[i] == d)
            return i;
        }
        return -1;
} 