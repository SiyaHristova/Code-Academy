/* Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа */

#include <stdio.h>

int main(void)
{
    int c;
    int i = 0;
    char line[1000];

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
        {
            line[i] = c;
            ++i;
        }

        else
        {
            line[i] = '\0';

            if (i >= 80)
            {
                printf("%s\n", line);
            }
            i = 0;
        }
    }
    return 0;
}