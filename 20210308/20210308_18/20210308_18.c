/*Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int age;
    char gender;
} t_person;

#define MAX_PEOPLE 2
#define XML_FORMAT "<person>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</person>\n"

void fillPeople(t_person *list);
void fillFile(FILE *stream, t_person *list);

int main()
{
    FILE *fp = NULL;
    t_person *peopleList = (t_person *)malloc(MAX_PEOPLE * sizeof(t_person));

    fillPeople(peopleList);

    if ((fp = fopen("struct.xml", "w")) != NULL)
    {
        fillFile(fp, peopleList);
    }
    else
    {
        perror("Failed to open the file");
    }

    free(peopleList);
    peopleList = NULL;

    fclose(fp);
    fp = NULL;

    return 0;
}

void fillPeople(t_person *list)
{
    for (int i = 0; i < MAX_PEOPLE; i++)
    {
        printf("Enter %d person name: ", i + 1);
        scanf("%s", &list[i].name);
        printf("Enter %d person age: ", i + 1);
        scanf(" %d", &list[i].age);
        printf("Enter %d person gender: ", i + 1);
        scanf(" %c", &list[i].gender);
    }
}

void fillFile(FILE *stream, t_person *list)
{
    for (int i = 0; i < MAX_PEOPLE; i++)
    {
        fprintf(stream, XML_FORMAT, list[i].name, list[i].age, list[i].gender);
    }
}