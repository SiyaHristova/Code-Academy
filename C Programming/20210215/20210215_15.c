/* Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */

#include <stdio.h>
#include <string.h>

void fCopyString(char *to, char *from){
    while(*from){
        *to++ = *from++;
    }
    *to = '\0';
}
int main(){
    char string1[] = "A string to be copied.";
    char string2[100];
    char string3[] =  "I am very good in strings coping!";
    char string4[100];
    fCopyString(string2, string1);
    printf("%s\n", string2);

    fCopyString(string4, string3);
    printf("%s\n", string4);
    fCopyString(string4, string1);
    printf("%s\n", string4);
    return 0;
}