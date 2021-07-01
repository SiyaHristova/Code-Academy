/* Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър 
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща назад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от 
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни 
файлове и просто число в байтове */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char *argv[]){  

    if(argc > 2){
        exit(2);
    }
    
    FILE *fp;
    char *fileName = argv[1];
    fp = fopen(fileName,"r");
    if(fp == NULL){
        printf("File failed to open\n");
        exit(3);
    }

    fseek(fp,7,SEEK_SET);
    long fpos = ftell(fp);
    printf("Size of file is: %ld bytes\n",fpos);
    printf("Position : %ld\n",fpos);

    return 0;
}