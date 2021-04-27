//  Да се дефинира константата Пи (3.14159...) и да се напише
// функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
// В main() да се извика горната функция с радиуси 1, 1.5, 13.

#include <stdio.h> 
const float Pi = 3.14159;
float lice(float R);
int main(){
    float r = 1;
    lice(r);
    r = 1.5;
    lice(r);
    r = 13;
    lice(r);
    return 0;
}
float lice(float R){
    float S = Pi * R * R;
    printf("%.2f\n", S);
}
