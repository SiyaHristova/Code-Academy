/* Решете задачата за генериране на 6 буквена парола с
пойнтери. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void password();
void menu();

int main(void)
{
    menu();
    return 0;
}
void password()
{

    srand((unsigned int)(time(NULL)));

    int index = 0;

    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cArr[6];
    char *p = cArr;
    for (int i = 0; i < 6; i++)
    {
        *(p + i) = characters[rand() % (sizeof characters - 1)];
        printf("%c", *(p + i));
    }
}
void menu()
{
    char answer;

    menu:
    printf("Menu\n");
    printf("'n' - new pass \n");
    printf("'y' - Exit \n");
    scanf("%c",&answer);

    switch(answer){
        case 'n':
        password();
        printf("\n\nDo you like the password? (please press 'y' or 'n')\n");
        scanf("%c",&answer);
        if(answer == 'y'){
            printf("Thank you for using this generator\n");
            break;
        }
        else{
            goto menu;
        }

        case 'y':
        exit(0);
    }
}