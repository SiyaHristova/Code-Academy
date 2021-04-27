/* Указатели към структура, предаване на структура на функция по стойност и по референция */
#include <stdio.h>
#include <string.h>
struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
void printPaper(struct tagPaper paper)
{ /* by value */
    printf("Paper id : %d\n", paper.m_nBookId);
    printf("Paper title : %s\n", paper.m_szTitle);
    printf("Paper author : %s\n", paper.m_szAuthor);
    printf("Paper subject : %s\n", paper.m_szSubject);
}
void printPtrPaper(struct tagPaper *pPaper)
{
    printf("Enter:\n");
    printf("Paper id: ");
    scanf("%d", &pPaper->m_nBookId);
    printf("Paper title: ");
    scanf("%s", pPaper->m_szTitle);
    printf("Paper author: ");
    //fgets(pPaper->m_szAuthor, 50, stdin);
    scanf("%s", pPaper->m_szAuthor);
    printf("Paper subject: ");
    scanf("%s", pPaper->m_szSubject);

    printf("----------------\n");
    printf("Displaying:\n");

    printf("Paper id : %d\n", pPaper->m_nBookId);
    printf("Paper title : %s\n", pPaper->m_szTitle);
    printf("Paper author : %s\n", pPaper->m_szAuthor);
    printf("Paper subject : %s\n", pPaper->m_szSubject);
}
int main()
{
    struct tagPaper myPaper = {123456, "Paper title", "Autor", "paper subject"};
    printPaper(myPaper);
    printf("---\n");
    printPtrPaper(&myPaper);
    return 0;
}
