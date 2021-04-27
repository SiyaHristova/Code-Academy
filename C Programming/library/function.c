#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int vzemiBitna(unsigned int n, int index)
{
    int mask = 1;
    n = n >> index;
    return n & mask;
}

void iz4istiBitna(unsigned int *n, int index)
{
    unsigned mask = ~(1 << index);
    *n = *n & mask;
    return;
}

void vdigniBitNa(unsigned int *n, int index)
{
    unsigned mask = 1 << index;
    *n = *n | mask;
    return;
}

void obarniBitNa(unsigned int *n, int index)
{
    *n ^= (1u << index);
}

void obarniBitNa(unsigned int *n, int index)
{
    *n ^= (1u << index);
}

void obarniBitNa(unsigned int *n, int index)
{
    *n ^= (1u << index);
    unsigned mask = ~(1 << index);
    *n = *n & mask;
}

void obarniBitNa(unsigned int *n, int index)
{
    *n ^= (1u << index);
    unsigned mask = ~(1 << index);
    *n = *n & mask;
}

void vdigniBitNa(unsigned int *n, int index)
{
    unsigned mask = 1 << index;
    *n = *n | mask;
    return;
}

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (n & i) ? printf("1") : printf("0");
    printf("\n");
}

void reverse(char s[])
{
    int i = 0;

    for (i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}
void reverseSecond(char *arr){
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

void decimalToBinary(int a)
{
    int s[a];
    int i = 0;
    while (a > 0)
    {
        s[i] = a % 2;
        i++;
        a = a / 2;
    }
    i = i - 1;
    while (i >= 0)
    {
        printf("%d", s[i]);
        i--;
    }
}

void rcomment(int a)
{
    int b = 0;

    if (a == '/')
    {
        if ((b = getchar()) == '*')
            incomment();
        else if (b == '/')
        {
            putchar(a);
            rcomment(b);
        }
        else
        {
            putchar(a);
            putchar(b);
        }
    }
    else
        putchar(a);
}

void incomment()
{
    int a = 0, b = 0;

    a = getchar();
    b = getchar();

    while (a != '*' || b != '/')
    {
        a = b;
        b = getchar();
    }
}

double atof(char *s)
{
    double val = 0, power = 0;
    int i = 0;
    for (val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power = power * 10;
    }
    return val / power;
}

void copy(char *to, char *from)
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        printf("%c", to[i++]);
    }
}

void reverseThird(char *s)
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
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

void itob(int n, char s[], int b)
{

    int count = 0;

    printf("\n%d (10) -> ", n);

    do
    {
        if (n % b > 9)
        {
            s[count] = 55 + (n % b);
        }
        else
        {
            s[count] = '0' + n % b;
        }

        count++;
        n /= b;
    } while (n > 0);

    while (count-- > 0)
    {
        printf("%c", s[count]);
    }
}

void squeeze(char s1[], int c)
{
    int i, j;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != 'c')
            s1[j++] = s1[i];
    }

    s1[j] = '\0';
}

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
            {
                printf("%c", s1[i]);
                return s1[i];
            }
        return -1;
    }
}

char *mytoupper(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 'a' - 'A';
        }
        i++;
    }
    return s;
}

int binarySearch(int a[], int n, int x)
{
    int mid = 0, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < a[mid])
            high = mid + 1;
        else if (x > a[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

size_t my_strlen(char *s){
    size_t l = 0u;
    while(*s++ != '\0')
        l++;
    return l;

}

void strcpy1(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}

int our_strcmp(char *s, char *t)
{
    int i = 0;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;
        return s[i] - t[i];
}
void our_strcat(char *s, char *t)
{
    while(*s!='\0')
        s++;
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}

int strend(char *s, char *t) {
    while (*s++) {  
        if (*t == *s) {
            while ((*s++ == *t++) && (*t != '\0')) ;
            if (*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}

void mystrncpy(char *s, char *t, int n)
{
    int i = 0, j = 0;
    for(i;s[i] != '\0';i++){
    }
    for (j;j<n;j++,i++){
        s[i] = t[j];
    }
    s[i] = '\0';
    printf("%s",s);
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

int pallindrome(char arr[], int n)
{
    int i, j, flag = 0;

    for (i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Array is not pallindrome\n");
    else
        printf("Array is pallindrome\n");
}

void fCopyString(char *to, char *from){
    while(*from){
        *to++ = *from++;
    }
    *to = '\0';
}

char* replaceWord(const char* s, const char* oldW, const char* newW) 
{ 
    char* result; 
    int i, cnt = 0; 
    int newWlen = strlen(newW); 
    int oldWlen = strlen(oldW); 
  
    for (i = 0; s[i] != '\0'; i++) { 
        if (strstr(&s[i], oldW) == &s[i]) { 
            cnt++; 
            i += oldWlen - 1; 
        } 
    } 
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
    i = 0; 
    while (*s) { 
        if (strstr(s, oldW) == s) { 
            strcpy(&result[i], newW); 
            i += newWlen; 
            s += oldWlen; 
        } 
        else
            result[i++] = *s++; 
    } 
    result[i] = '\0'; 
    return result; 
} 


void sort(char *s)
{
   int c, i = 0, len;
   char *pointer, *result, ch;

   len = strlen(s);

   result = (char*)malloc(len+1);

   pointer = s;

   for ( ch = 'a' ; ch <= 'z' ; ch++ )
   {
      for ( c = 0 ; c < len ; c++ )
      {
         if ( *pointer == ch )
         {
            *(result+i) = *pointer;
            i++;
         }
         pointer++;
      }
      pointer = s;
   }
   *(result + i) = '\0';

   strcpy(s, result);
   free(result);
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

void password()
{

    srand((unsigned int)(time(NULL)));

    int index = 0;

    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cArr[6];
    char *p = cArr;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = characters[rand() % (sizeof characters - 1)];
        printf("%c", *(p + i));
    }
}
void PassGen(char *cString, int MaxLength)
{
    for (int i = 0; i < MaxLength; i++)
    {
        cString[i] = 33 + rand() % 89;
    }
}

int check_anagram(char a[], char b[])
{
    int first[26] = {0}, second[26] = {0}, c = 0;

    while (a[c] != '\0')
    {
        first[a[c] - 'a']++;
        c++;
    }
    c = 0;
    while (b[c] != '\0')
    {
        second[b[c] - 'a']++;
        c++;
    }
    for (c = 0; c < 26; c++)
        if (first[c] != second[c])
            return 0;

    return 1;
}