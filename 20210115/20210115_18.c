//  Довършете задачата за кемперите от миналия път като добавите
// променлива, в която да се събират парите, които клиента дължи на компанията.
// Принтирайте резултата. Питайте клиента дали иска още налични продукти.

#include <stdio.h> 

int main(){
    unsigned int broiKaravani, broiKemperi;
    int cenaDenKaravana = 90, cenaDenKemper = 100, izbor, daljimiPari;

    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &izbor);
    if(izbor == 1){
        daljimiPari = 90;
    }
    else if(izbor == 2){
        daljimiPari = 100;
    }
    printf("%d", daljimiPari);
    return 0;
}