
/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.

Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.
*/
#include <stdio.h>

int main()
{
    typedef long long int my_type;
    my_type var = 123456789;
    printf("size of my_type is: %d\n", sizeof(var));

    my_type* ptr = &var;
    printf("Value: %lld Address: %p\n", *ptr, ptr);

    return 0;
}