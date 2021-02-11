/* Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void password()
{

    srand((unsigned int)(time(NULL)));

    int index = 0;
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (index = 0; index < 6; index++)
    {
        printf("%c", characters[rand() % (sizeof characters - 1)]);
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
        printf("\nDo you like the password? (please press 'y' or 'n')\n");
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
int main(void)
{
    menu();
    return 0;
}