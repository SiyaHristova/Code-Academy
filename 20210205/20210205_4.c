/* .Какво е грешното на този код ? */

void my_strcpy(char *t, char *s)
{
    for (; *t; t++, s++)
        *s = *t;
}
/* сравнението за край на стринг се прави преди да се присвои стойността
на последния елемент. */