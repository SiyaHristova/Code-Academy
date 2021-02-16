/* Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

void sorting( char str[] ) {
  qsort(str, (size_t) strlen(str), (size_t) sizeof(char), cmpfunc);
  printf("%s\n", str);
}


int main() {
  char str1[] = "edcba";

  sorting(str1);

  return 0;
}