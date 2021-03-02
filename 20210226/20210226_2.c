/*  Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */
#include <stdio.h>
int main(){
    typedef long long int book;
    printf("%ld\n", sizeof(book));
    return 0;
}