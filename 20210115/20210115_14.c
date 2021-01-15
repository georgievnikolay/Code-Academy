//Напишете глобална променлива, която увеличаваме с 1 във
//функция void test(). Извикайте функцията три пъти test() от main()
//принтирайте стойността на глобалната променлива.
#include<stdio.h>

extern int g_nValue;
void test();
int main() {
    
    test();
    test();
    test();

    printf("%d\n", g_nValue);
    return 0;
}
int g_nValue = 0;

void test() {
    g_nValue += 1;
}