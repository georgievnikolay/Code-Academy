#include<stdio.h>
#include<string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAutor[64];
    char m_szSubject[256];
};

void printPaper(struct tagPaper paper);
void printPtrPaper(struct tagPaper* pPaper);

int main() {
    struct tagPaper book1;
    struct tagPaper *ptr = &book1;

    book1.m_nBookId = 13843;
    strcpy(book1.m_szTitle, "Book Title");
    strcpy(book1.m_szAutor, "Book Autor");
    strcpy(book1.m_szSubject, "Book Subject");

    printPaper(book1);
    printf("----------------------------------------\n");
    printPtrPaper(ptr);

    return 0;
}

void printPaper(struct tagPaper paper){ /*by Value*/

    printf("Book ID is: %d \n", paper.m_nBookId);
    printf("Book title is: \"%s\"\n", paper.m_szTitle);
    printf("Book Autor is: \"%s\"\n", paper.m_szAutor);
    printf("Book Subject is: \"%s\"\n", paper.m_szSubject);
}

void printPtrPaper(struct tagPaper* pPaper){ /*by reference to the value*/  
    printf("Book ID is: %d \n", pPaper->m_nBookId);
    printf("Book title is: \"%s\"\n", pPaper->m_szTitle);
    printf("Book Autor is: \"%s\"\n", pPaper->m_szAutor);
    printf("Book Subject is: \"%s\"\n", pPaper->m_szSubject);
}