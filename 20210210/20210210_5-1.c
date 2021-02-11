/*  Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи. */

#include <stdio.h> 
  
void sort(int n, int* ptr) 
{ 
    int i, j, t; 
   
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
} 
int main() 
{ 
    int n = 5; 
    int arr[] = { 0, 50, 16, 48, 9 }; 
  
    sort(n, arr); 
  
    return 0; 
} 