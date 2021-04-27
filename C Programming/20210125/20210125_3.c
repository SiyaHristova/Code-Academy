/* Напишете програма, която преброява шпациите, табулациите и
новите редове. */

#include <stdio.h>
int main(void)
{
    char c = 0;
    
    int counterRedove = 0;
    int counterShpacii = 0;
    int counterTabulacii = 0;
    

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            counterRedove++;
        }
        else if (c == ' ')
        {
            counterShpacii++;
        }
        else if (c == '\t')
        {
            counterTabulacii++;
        }
    }
    printf("\nRedove: %d", counterRedove);
    printf("\nShpacii: %d", counterShpacii);
    printf("\nTabulacii: %d", counterTabulacii);
    return 0;
}
