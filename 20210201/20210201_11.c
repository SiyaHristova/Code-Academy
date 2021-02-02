/* напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */

#include <stdio.h>

void squeeze(char s1[], int c);
int main(){
    int c;
    char s[] = "cHEcRcE";
    squeeze(s,c);

    printf("%s",s);

}
void squeeze(char s1[], int c){
    int i,j;

    for(i=j=0;s1[i]!='\0';i++)
    {
        if(s1[i]!='c')
            s1[j++] = s1[i];
    }
    
    s1[j]='\0';

}