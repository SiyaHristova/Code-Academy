/* Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред. */ 

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