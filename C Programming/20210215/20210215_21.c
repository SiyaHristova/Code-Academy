/* Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char*);

int main()
{
   char string[100];

   printf("Enter some text\n");
   gets(string);

   sort(string);
   printf("%s\n", string);

   return 0;
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