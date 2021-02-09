/* Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */

#include <stdio.h>

void findMax(int *arr, int length);

int main(void){

    int arrLength = 0, i = 0;
    printf("Enter the length of the array\n");
    scanf("%d",&arrLength);

    if(arrLength < 0){
        while (arrLength<0){
            printf("Length must be above 0\n");
            scanf("%d",&arrLength);
        }
    }
    int arr[arrLength];

    for (i; i<arrLength; i++){
        printf("Enter a %d number: \n", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < arrLength; i++){
        printf("Value of %d element is: %d \n", i, arr[i]);
    }

    findMax(arr, arrLength);

    return 0;
}

void findMax(int *arr, int length){

    int max = arr[0];
    int i = 0, indexOfMax = 0;

    for (i = 0; i < length; i++){
        if(max < arr[i]){
            max = arr[i];
            indexOfMax = i;
        }
    }
    printf("\nThe biggest number in the array is: %d\n\n", max);
}