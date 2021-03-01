/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int number;
    char firstName[20];
    char lastName[20];
    int age;

} participant;

unsigned countParticipants;

void enterParticipants(participant *list);
void printParticipantsList(participant *list);
void orderAlphabetically(participant *list);
void swap(participant *a, participant *b);

int main()
{

    printf("Enter the number of participants: ");
    scanf("%ud", &countParticipants);

    participant *participantsList = (participant *)malloc(countParticipants * sizeof(participant));

    enterParticipants(participantsList);

    orderAlphabetically(participantsList);
    printParticipantsList(participantsList);

    return 0;
}

void enterParticipants(participant *list)
{
    participant *ptr = list;

    for (int i = 0; i < countParticipants; i++)
    {
        printf("Enter participant number: ");
        scanf("%d", &ptr->number);
        printf("Enter participant first name: ");
        scanf("%s", &ptr->firstName);
        printf("Enter participant last name: ");
        scanf("%s", &ptr->lastName);
        printf("Enter participant age: ");
        scanf("%d", &ptr->age);
        ptr++;
    }

    ptr = NULL;
}

void printParticipantsList(participant *list)
{
    participant *ptr = list;
    for (int i = 0; i < countParticipants; i++)
    {
        printf("#%d\tName: %s\t%s\tAge:%d\n", ptr->number, ptr->firstName, ptr->lastName, ptr->age);
        ptr++;
    }
    ptr = NULL;
}

void orderAlphabetically(participant *list)
{
    for (int i = 0; i < countParticipants - 1; i++)
    {
        for (int j = i + 1; j < countParticipants; j++)
        {
            if (strncmp(list[i].firstName, list[j].firstName, 1) > 0)
            {
                swap(&list[i], &list[j]);
            }
        }
    }
}

void swap(participant *a, participant *b)
{
    participant temp = *a;
    *a = *b;
    *b = temp;
}
