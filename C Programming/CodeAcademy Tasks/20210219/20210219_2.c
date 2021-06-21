/* Инициализиране на структура, вложени структури */
#include <stdio.h>
#include <string.h>
struct tagDetail
{
    unsigned m_uAcadId;
    char m_szAcadName[15];
    char m_szAcadUrl[25];
};
struct tagCadet
{
    unsigned m_uCadetId;
    char m_CadetName[15];
    float m_uAverageRating;
    struct tagDetail m_detail;
};
int main()
{
    struct tagCadet *cadetPtr, cadet1;
    cadetPtr = &cadet1;
    //struct tagCadet cadet = {1, "Ivan Ivanov", 5.52, {13, "Code Academy", "https://codeacademy.bg"}};

    printf("Enter id: ");
    scanf("%d", &cadetPtr->m_uCadetId);

    printf("Enter name: ");
    scanf("%s", &cadetPtr->m_CadetName);

    printf("Enter rating: ");
    scanf("%f", &cadetPtr->m_uAverageRating);

    printf("Enter academy Id: ");
    scanf("%d", &cadetPtr->m_detail.m_uAcadId);

    printf("Enter academy Name: ");
    scanf("%s", &cadetPtr->m_detail.m_szAcadName);

    printf("Enter academy URL: ");
    scanf("%s", &cadetPtr->m_detail.m_szAcadUrl);

    printf("-----------------------------\n");
    printf("Cadet Id is: %d\n", cadetPtr->m_uCadetId);
    printf("Name is: %s\n", cadetPtr->m_CadetName);
    printf("Rating (2-6) is: %.2f\n", cadetPtr->m_uAverageRating);
    printf("Academy Id is: %d\n", cadetPtr->m_detail.m_uAcadId);
    printf("Name is: %s\n", cadetPtr->m_detail.m_szAcadName);
    printf("URL is: %s\n", cadetPtr->m_detail.m_szAcadUrl);

    return 0;
}
