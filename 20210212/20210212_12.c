/*Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX_PARTICIPANTS 100

int partNumbers[MAX_PARTICIPANTS];
char *partFirstName[MAX_PARTICIPANTS], firstName[20];
char *partLastName[MAX_PARTICIPANTS], lastName[20];
int partAge[MAX_PARTICIPANTS];

void participantsSort(int numberOfParticipants);

int main(){
    
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
    participantsSort(numOfParticipants);

    for(partIdx = 0; partIdx < numOfParticipants; partIdx++){
        printf("Number: %d\t Name: %s %s\t Age:%d\n", partNumbers[partIdx], partFirstName[partIdx], partLastName[partIdx], partAge[partIdx]);
        free(partFirstName[partIdx]);
        free(partLastName[partIdx]);
    }
    
    return 0;
}

void participantsSort(int numberOfParticipants){
    char *tempPointer = NULL;
    int tempNumber, i, j;

    for(i = 0; i < numberOfParticipants - 1; i++){
        for(j = i + 1; j < numberOfParticipants; j++){

            if(strncmp(partFirstName[i], partFirstName[j], 1) > 0){
                
                tempPointer = partFirstName[j];
                partFirstName[j] = partFirstName[i];
                partFirstName[i] = tempPointer;

                tempPointer = partLastName[j];
                partLastName[j] = partLastName[i];
                partLastName[i] = tempPointer;

                tempNumber = partNumbers[j];
                partNumbers[j] = partNumbers[i];
                partNumbers[i] = tempNumber;

                tempNumber = partAge[j];
                partAge[j] = partAge[i];
                partAge[i] = tempNumber;
            }
        }
    }

    return;
}