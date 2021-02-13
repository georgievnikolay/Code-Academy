/*Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX_PARTICIPANTS 100

int main(){
    int partNumbers[MAX_PARTICIPANTS];
    char *partFirstName[MAX_PARTICIPANTS], firstName[20];
    char *partLastName[MAX_PARTICIPANTS], lastName[20];
    int partAge[MAX_PARTICIPANTS];
    
    int numOfParticipants = 1, partIdx = 0;
    char choice = 'y';

    //pNumber = (int*)malloc(uNumSize * sizeof(int));

    while (1){

        printf("\nEnter the number of the participant:");
        scanf("%d", &partNumbers[partIdx]);
        
        printf("\nFirst name: ");
        scanf("%s", &firstName);

        partFirstName[partIdx] = (char*)malloc(strlen(firstName) + 1);
        strcpy(partFirstName[partIdx], firstName);

        printf("\nLast name: ");
        scanf("%s", &lastName);

        partLastName[partIdx] = (char*)malloc(strlen(lastName) + 1);
        strcpy(partLastName[partIdx], lastName);

        printf("\nAge: ");
        scanf("%d", &partAge[partIdx]);

        printf("\nDo you want to enter another participant's data? y/n: ");
        scanf(" %c", &choice);
        if((choice != 'y') || (partIdx == MAX_PARTICIPANTS)){
            break;
        }

        partIdx++;
    }

    numOfParticipants += partIdx;
    for(partIdx = 0; partIdx < numOfParticipants; partIdx++){
        printf("Number: %d\t Name: %s %s\t Age:%d\n", partNumbers[partIdx], partFirstName[partIdx], partLastName[partIdx], partAge[partIdx]);
        free(partFirstName[partIdx]);
        free(partLastName[partIdx]);
    }
    
    return 0;
}