/* Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t. */

#include <stdio.h>

int main () {
   FILE *fp;
   fpos_t position;

   fp = fopen("11.txt","w+");
   fgetpos(fp, &position);
   
   fputs("Hello, World!", fp);

   fgetpos(fp, &position);
   printf("%d", position);
   
   fclose(fp);
   return(0);
}