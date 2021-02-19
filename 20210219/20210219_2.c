#include<stdio.h>
#include<string.h>

#define BUFSIZE 64

struct tagDetail{
    unsigned m_uAcadID;
    char m_szAcadName[BUFSIZE];
    char m_szAcadURL[BUFSIZE];
};

struct tagCadet{
    unsigned m_uCadetID;
    char m_CadetName[BUFSIZE];
    float m_uAverageRating;
    struct tagDetail m_detail;
};


int main() {
    struct tagCadet cadet = { 1, "Ivan Ivanov", 5.52, /*Second Structure Members*/
                            { 13, "Code Academy", "https://codeacademy.bg" } }; /*First(nested) Structure members*/

    printf("Cadet Id is: %d\n", cadet.m_uCadetID);
    printf("Name is: %s\n", cadet.m_CadetName);
    printf("Rating (2-6) is: %.2f\n", cadet.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadID);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadURL);

    return 0;
}