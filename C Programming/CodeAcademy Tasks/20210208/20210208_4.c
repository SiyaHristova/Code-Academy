/* Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */

#include <stdio.h>

double averageSum(int *s,int length);

int main(void){

    int length = 0;

    printf("Enter the length of the array: \n");
    scanf("%d", &length);

    int arr[length];
    for(int i; i<length; i++){
        printf("Enter a number for index %d:\n",i);
        scanf("%d",&arr[i]);
    }

    printf("Average sum of the numbers in the array is: %.2lf",averageSum(arr, length));

    return 0;
}

double averageSum(int *s,int length){

    int i = 0;
    double average = 0;
    for(i; i < length; i++){
        average += s[i];
    }
    return average/length;

}