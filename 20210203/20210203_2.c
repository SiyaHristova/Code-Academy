/* Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */

#include <stdio.h>

int printArr(int a[], int l);

int main(){
    int a[] = {1,2,3,4,5};
    int l = sizeof(a)/sizeof(a[0]);;
    printArr(a, l);
    return 0;
}
int printArr(int a[], int l){
    int i = 0;
    for(i = 0; i < l; i++){
        printf("%d Element: %d\n", i, a[i]);
    }
    return 0;
}