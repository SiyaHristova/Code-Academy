/*  Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */

#include <stdio.h>
 
int linearSearch(const int a[], int size, int key);
 
int main() {
   const int SIZE = 8;
   
   int a1[] = {8, 4, 5, 3, 2, 9, 4, 1};
 
   printf("%d\n", linearSearch(a1, SIZE, 8));  // 0
   printf("%d\n", linearSearch(a1, SIZE, 4));  // 1
   printf("%d\n", linearSearch(a1, SIZE, 99)); // 8 (not found)
}
int linearSearch(const int a[], int size, int key) {
   int i;
   const int *p;
   p = a;
   for (i = 0; i < size; ++i) {
      if (*p++ == key) return i;
   }
   return size;
}