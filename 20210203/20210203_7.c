/*Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? 
Какво представлява името на масива?
Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?*/
#include<stdio.h>

int main() {
    /*Какво представлява името на масива? Името на масива само по себе си е поинтър */
    int arr[] = {1, 2, 3, 4, 5, 6};
    /*Какво сочи? към паммета на отделните клетки в него*/
    int *pArr = arr;
    printf("%d\n", pArr); /*така написано ще получим директно адреса на първия елемент в паметтна, но ако искаме да получим адреса на някой друг елемент трябва да използваме &*/


    return 0;
}

/*
Колко начина има за да изпишете насочването на пойнтера към масива. два в зависимост кой елемент искаме да достъпим
Има ли разлика между тях? единият сочи към паметта на клетките а другият връща техните стойности
*/