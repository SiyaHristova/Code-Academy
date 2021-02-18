/* Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред */

#include <stdio.h>
void reverse(char *arr);
int main(){
    char arr[50];
    reverse(arr);
    return 0;
    
}
void reverse(char *arr){
    char c, *p;
    int i = 0;
    p = arr;
    printf("Enter a message: ");
    while ((c = getchar()) != '\n') {
        arr[i] = c;
        ++i;
        p++;
    }
    printf("Reversal is: ");
    while (i > 0){
        --p;
        putchar(*p);
        i--;
    }

}