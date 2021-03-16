#include "head.h"
#include "fun.c"
#define size 13

/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

tree* root = NULL,*arr1p,*arr2p,*arr3p,*arr4p,*arr5p;

int main(void){

    int i;
    int arr1[size] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    for(i=0;i<size;i++){
        insert(arr1[i]);
    }
    arr1p = root;
    printf("\nArr1: ");
    printTree(arr1p);
    root = NULL;

    int arr2[size] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    for(i=0;i<size;i++){
        insert(arr2[i]);
    }
    arr2p = root;
    printf("\nArr2: ");
    printTree(arr2p);
    root = NULL;

    int arr3[size] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    for(i=0;i<size;i++){
        insert(arr3[i]);
    }
    arr3p = root;
    printf("\nArr3: ");
    printTree(arr3p);
    root = NULL;

    int arr4[size] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    for(i=0;i<size;i++){
        insert(arr4[i]);
    }
    arr4p = root;
    printf("\nArr4: ");
    printTree(arr4p);
    root = NULL;

    int arr5[size] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    for(i=0;i<size;i++){
        insert(arr5[i]);
    }
    arr5p = root;
    printf("\nArr5: ");
    printTree(arr5p);
    root = NULL;

    return 0;
}