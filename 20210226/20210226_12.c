/*Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef*/
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int number;
    char firstName[20];
    char surname[20];
    char lastName[20];
    char position[20];
    int workExperience;
    float salary;
} manager;

typedef struct
{
    int number;
    char firstName[20];
    char surname[20];
    char lastName[20];
    char position[20];
    int workExperience;
    float salary;
    manager *pManager;
} employee;

void enterEmployees(employee *array);
void enterManagers(employee *arrayE, manager *arrayM);
void printList(employee *arrayE, int size);

int main()
{
    char choice;
    int counter = 1;
    employee *empList = (employee *)malloc(counter * sizeof(employee));
    manager *manList = (manager *)malloc(counter * sizeof(manager));
    employee *ptrE = empList;
    manager *ptrM = manList;

    while (1)
    {
        enterEmployees(ptrE);
        enterManagers(ptrE, ptrM);

        printf("Do you want to enter another employee info? y/n: ");
        scanf("%c", &choice);

        if (choice == 'y')
        {
            counter++;
            empList = (employee *)realloc(empList, counter * sizeof(employee));
            manList = (manager *)realloc(manList, counter * sizeof(manager));
            ptrE++, ptrM++;
        }
        else
        {
            break;
        }
    }
    printList(empList, counter);

    free(empList);
    free(manList);
    empList = NULL;
    ptrE = NULL;
    manList = NULL;
    ptrM = NULL;

    return 0;
}

void enterEmployees(employee *array)
{
    printf("------Employee Details-------\n");
    printf("Enter employee number: ");
    scanf("%d", &array->number);
    printf("Enter employee first name:");
    scanf("%s", &array->firstName);
    printf("Enter employee surname:");
    scanf("%s", &array->surname);
    printf("Enter employee last name:");
    scanf("%s", &array->lastName);
    printf("Enter employee position:");
    scanf("%s", &array->position);
    printf("Enter employee work experience:");
    scanf("%d", &array->workExperience);
    printf("Enter employee salary:");
    scanf("%f", &array->salary);
    fflush(stdin);
}
void enterManagers(employee *arrayE, manager *arrayM)
{
    arrayE->pManager = arrayM;
    printf("      Manager Details       \n");
    printf("Enter manager number: ");
    scanf("%d", &arrayE->pManager->number);
    printf("Enter manager first name:");
    scanf("%s", &arrayE->pManager->firstName);
    printf("Enter manager surname:");
    scanf("%s", &arrayE->pManager->surname);
    printf("Enter manager last name:");
    scanf("%s", &arrayE->pManager->lastName);
    printf("Enter manager position:");
    scanf("%s", &arrayE->pManager->position);
    printf("Enter manager work experience:");
    scanf("%d", &arrayE->pManager->workExperience);
    printf("Enter manager salary:");
    scanf("%f", &arrayE->pManager->salary);
    fflush(stdin);
}
void printList(employee *arrayE, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("=============================\n");
        printf("------Employee Details-------\n");
        printf("Employee number: %d\n", arrayE->number);
        printf("Employee full name: %s %s %s\n", arrayE->firstName, arrayE->surname, arrayE->lastName);
        printf("Employee position: %s\n", arrayE->position);
        printf("Employee work experience: %d\n", arrayE->workExperience);
        printf("Employee salary: %.2f\n", arrayE->salary);
        printf("      Manager Details       \n");
        printf("Manager number: %d\n", arrayE->pManager->number);
        printf("Manager full name: %s %s %s\n", arrayE->pManager->firstName, arrayE->pManager->surname, arrayE->pManager->lastName);
        printf("Manager position: %s\n", arrayE->pManager->position);
        printf("Manager work experience: %d\n", arrayE->pManager->workExperience);
        printf("Manager salary: %.2f\n", arrayE->pManager->salary);
        printf("=============================\n");
        arrayE++;
    }
}