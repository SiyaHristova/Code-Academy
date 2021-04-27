/* Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив. */
#include <stdio.h>
#include <string.h>

int atoi(char s[]);
void itoa(int n, char s[]);
double atof(char *s);
void reverse(char *s);

int main(void){

    char ai[] = "123";
    printf("Atoi: %d\n",atoi(ai));
    int n = 567;
    char ia[n+1]; // n+1 , защото ако n = 0, то масивът ще е 1 и ще може да се въведе стойност 0
    itoa(n,ia);
    reverse(ia);
    printf("Itoa: %s\n",ia);
    char af[] = "123.45";
    printf("Atof: %lf\n",atof(af));
    char rev[] = "pesho";
    reverse(rev);
    printf("Reverse: %s",rev);

}

int atoi(char s[]){
    int i, n;
    n = 0;
    for(; *s >= '0' && *s <= '9'; *s++)
        n = 10 * n + (*s - '0');
    return n;
}

void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
        printf("n % 10 = %d\n", n % 10);
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
double atof(char *s){
    double val = 0, power = 1;

    for (; *s != '.'; s++){
        val = val * 10 + (*s - '0');
    }

    s++;

    for (;*s ;s++){
        val = val * 10 + (*s - '0');
        power = power * 10;
    }

    return val/power;
}
void reverse(char *s)
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
