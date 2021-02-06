/* Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf */

#include <stdio.h>

int main(){
    int iArr[5];
    int i = 0;
    for(i = 0; i<5; i++){
        printf("\nEnter %d. element: ", i);
        scanf("%d", &iArr[i]);
    }

    for(i = 0; i<5; i++){
        printf("\n%d. element: %d ", i, iArr[i]);
    }
    
    return 0;
}