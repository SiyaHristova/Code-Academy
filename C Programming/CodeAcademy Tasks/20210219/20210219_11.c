/* Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга. */

#include <stdio.h>

struct Developer{
    char name[20];
    char family[20];
    struct Developer *p;
};

int main(){

    struct Developer dev1 = {"Ivan", "Georgiev"};
    printf("Printing info: \n");
    printf("Name: %s\n",dev1.name);
    printf("Family name: %s\n",dev1.family);

    struct Developer dev2;
    dev2.p = &dev1;
    printf("\nPrinting using pointer:\n");
    printf("Name: %s\n",dev2.p->name);
    printf("Family name: %s\n",dev2.p->family);

    return 0;
}