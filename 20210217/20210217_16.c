/*Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.*/
#include <stdio.h>

#define SMALL 5
#define LARGE 10

int main()
{
    int A[SMALL] = {1, 3, 5, 7, 10};
    int B[SMALL] = {2, 3, 6, 7, 11};
    int C[LARGE];
    int countA = 0, countB = 0, countC = 0;

    while (countC < LARGE)
    {
        if (A[countA] < B[countB])
        {
            C[countC] = A[countA];
            countA++;
        }
        else if (A[countA] > B[countB])
        {
            C[countC] = B[countB];
            countB++;
        }
        else
        {
            C[countC] = A[countA];
            countC++;
            C[countC] = B[countB];
            countA++, countB++;
        }
        countC++;
    }

    for (int i = 0; i < LARGE; i++)
    {
        printf("%d ", C[i]);
    }
}