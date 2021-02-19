#include<stdio.h>
#include"header.h"

/*Function to enter Employee details*/
void enterEmployees(struct employee *array, int index)
{
    printf("------Employee Details-------\n");
    printf("Enter employee number: ");
    scanf("%d", &array[index].number);
    printf("Enter employee first name:");
    scanf("%s", &array[index].firstName);
    printf("Enter employee surname:");
    scanf("%s", &array[index].surname);
    printf("Enter employee last name:");
    scanf("%s", &array[index].lastName);
    printf("Enter employee position:");
    scanf("%s", &array[index].position);
    printf("Enter employee work experience:");
    scanf("%d", &array[index].workExperience);
    printf("Enter employee salary:");
    scanf("%f", &array[index].salary);
}
/*Function to enter manager details*/
void enterManagers(struct manager *array, int index)
{

    printf("      Manager Details       \n");
    printf("Enter manager number: ");
    scanf("%d", &array[index].number);
    printf("Enter manager first name:");
    scanf("%s", &array[index].firstName);
    printf("Enter manager surname:");
    scanf("%s", &array[index].surname);
    printf("Enter manager last name:");
    scanf("%s", &array[index].lastName);
    printf("Enter manager position:");
    scanf("%s", &array[index].position);
    printf("Enter manager work experience:");
    scanf("%d", &array[index].workExperience);
    printf("Enter manager salary:");
    scanf("%f", &array[index].salary);
}
/*function to print all the employees and their managers*/
void printList(struct employee *arrayE, struct manager *arrayM)
{
    for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("=============================\n");
        printf("------Employee Details-------\n");
        printf("Employee number: %d\n", arrayE[i].number);
        printf("Employee full name: %s %s %s\n", arrayE[i].firstName, arrayE[i].surname, arrayE[i].lastName);
        printf("Employee position: %s\n", arrayE[i].position);
        printf("Employee work experience: %d\n", arrayE[i].workExperience);
        printf("Employee salary: %.2f\n", arrayE[i].salary);
        printf("      Manager Details       \n");
        printf("Manager number: %d\n", arrayM[i].number);
        printf("Manager full name: %s %s %s\n", arrayM[i].firstName, arrayM[i].surname, arrayM[i].lastName);
        printf("Manager position: %s\n", arrayM[i].position);
        printf("Manager work experience: %d\n", arrayM[i].workExperience);
        printf("Manager salary: %.2f\n", arrayM[i].salary);
        printf("=============================\n");
    }
}