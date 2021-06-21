/* Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>

int CountCharacters (char *cString, char* cLetter);

int main(){
    char cString[50] ={'a'};
    char cLetter ='a';

    printf("Please enter a string (max 50 characters):\n");
    fgets(cString, sizeof cString, stdin);

    printf("What character are we looking for?\n");
    scanf("%c", &cLetter);

    printf("%d times\n", CountCharacters(cString, &cLetter));
}

int CountCharacters (char *cString, char *cLetter){
    int iCounter = 0;

    for (cString; *cString; cString++){
        if((*cString) == (*cLetter)){
            iCounter++;
        }
    }
    return iCounter;
}