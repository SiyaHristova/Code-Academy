/*  Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено */

#include <stdio.h>
 
int strend(char *s, char *t);
 
int main() {
    char first[] = "Hello world!";
    char second[] = "world!";
     
    printf("%d", strend(first, second));
        
    return 0;
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