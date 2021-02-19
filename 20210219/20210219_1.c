#include<stdio.h>
#include<string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAutor[64];
    char m_szSubject[256];
};

int main() {
    struct tagPaper book1;

    book1.m_nBookId = 13843;
    strcpy(book1.m_szTitle, "Book Title");
    strcpy(book1.m_szAutor, "Book Autor");
    strcpy(book1.m_szSubject, "Book Subject");

    printf("Book ID is: %d \n", book1.m_nBookId);
    printf("Book title is: \"%s\"\n", book1.m_szTitle);
    printf("Book Autor is: \"%s\"\n", book1.m_szAutor);
    printf("Book Subject is: \"%s\"\n", book1.m_szSubject);
    

    return 0;
}
