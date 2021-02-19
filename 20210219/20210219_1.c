/* Дефиниране на структура, достъп до членове */

#include <stdio.h>
#include <string.h>

struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

int main()
{
    struct tagPaper *bookPtr, book1;
    bookPtr = &book1;   

    printf("Enter id: ");
    scanf("%d", &bookPtr->m_nBookId);

    printf("Enter title: ");
    scanf("%s", &bookPtr->m_szTitle);

    printf("Enter Author: ");
    scanf("%s", &bookPtr->m_szAuthor);

    printf("Enter Sub: ");
    scanf("%s", &bookPtr->m_szSubject);

    printf("Displaying:\n");
    printf("ID: %d\n", bookPtr->m_nBookId);
    printf("Author: %s\n", bookPtr->m_szAuthor);
    printf("Title: %s\n", bookPtr->m_szAuthor);
    printf("Sub: %s\n", bookPtr->m_szSubject);


    return 0;
}
/*
int main()
{
    struct tagPaper stPaper;
    stPaper.m_nBookId = 123456;
    strcpy(stPaper.m_szTitle, "Paper title");
    strcpy(stPaper.m_szAuthor, "Autor");
    strcpy(stPaper.m_szSubject, "paper subject");
    printf("Paper id : %d\n", stPaper.m_nBookId);
    printf("Paper title : %s\n", stPaper.m_szTitle);
    printf("Paper author : %s\n", stPaper.m_szAuthor);
    printf("Paper subject : %s\n", stPaper.m_szSubject);
    return 0;
}
*/