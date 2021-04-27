#include <stdio.h>
#include <string.h>
char *month_name(int n){
    static char *name[] = {
            "Illegal month",
            "January", "February", "March",
            "April", "May", "June",
            "July", "August", "September",
            "October", "November", "December" };
    return (n < 1 || n > 12) ? name[0] : name[n];
 }
int main(){
    int n = 0;
    printf("size = ", n);
    scanf("%d", &n);
    printf("%s", month_name(n));
    return 0;
}