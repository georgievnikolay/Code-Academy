#include "realEstate.h"

void menu() {
    int choice;

    while(1) {
        printf("======Main Menu======\n");
        printf("To enter new data in the file type 1\n");
        printf("To get reference on a real estate by cadastre number type 2\n");
        printf("To get referance on a owners of a real estate by it's address type 3\n");
        printf("To get a referance for a person's real estates by his passport number type 4\n");
        printf("To exit type 5\n");
        printf("=====================\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            enterDataInFile();
            break;
        case 2:
            printOptionWithCadastre();
            break;
        case 3:
            printOptionWithStreet();
            break;
        case 4:
            printOptionWithPassportNumber();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Please enter a valid command!\n");
            break;
        }
    }
}

/*Function to enter data gathered for real estate and its owners with enterRealEstateData/RealEstateOwnersData*/
void enterDataInFile() {
    FILE *fp;
    if((fp = fopen("realEstateData.CSV", "a")) == NULL) {
        printf("Failed to open the file\n");
        printf("Error %d -> %s\n", errno, strerror(errno));
        exit(1);
    }

    realEstate *realEstateData = (realEstate*)malloc(sizeof(realEstate));
    checkAllocationError(realEstateData);
    person *personData = (person*)malloc(sizeof(person));
    checkAllocationError(personData);

    enterRealEstateData(realEstateData);

    int realEstateOwners;
    checkValue(&realEstateOwners, "\nHow many owners the real estate has: ");
   
    fprintf(fp, CSV_FORMAT_ESTATE_IN, realEstateData->uniqueEstateNumber, realEstateData->cadastreNumber, 
                realEstateData->estateAddress.city, realEstateData->estateAddress.streetName, realEstateData->estateAddress.streetNumber, 
                realEstateData->estateAddress.entrance, realEstateData->estateAddress.floor, realEstateData->estateAddress.apartmentNumber);

    for(int i = 0; i < realEstateOwners; i++) {
        enterRealEstateOwnersData(personData);
        realEstateData->owners[i] = personData;

        fprintf(fp, CSV_FORMAT_PERSON_IN, 
                realEstateData->owners[i]->firstName, realEstateData->owners[i]->middleName, realEstateData->owners[i]->lastName,
                realEstateData->owners[i]->personAddress.city, realEstateData->owners[i]->personAddress.streetName, realEstateData->owners[i]->personAddress.streetNumber, realEstateData->owners[i]->personAddress.entrance, realEstateData->owners[i]->personAddress.floor, realEstateData->owners[i]->personAddress.apartmentNumber,
                realEstateData->owners[i]->EGN, 
                realEstateData->owners[i]->passportData.passportNumber, realEstateData->owners[i]->passportData.passportDateOfIssue.day, realEstateData->owners[i]->passportData.passportDateOfIssue.month, realEstateData->owners[i]->passportData.passportDateOfIssue.year,
                realEstateData->owners[i]->passportData.passportDateOfExpiry.day, realEstateData->owners[i]->passportData.passportDateOfExpiry.month, realEstateData->owners[i]->passportData.passportDateOfExpiry.year,
                realEstateData->owners[i]->numberOfDeedDoc, realEstateData->owners[i]->deedDocDate.day, realEstateData->owners[i]->deedDocDate.month, realEstateData->owners[i]->deedDocDate.year, realEstateData->owners[i]->percentageOwnedInEstate);
    }

    fseek(fp, 0, SEEK_END);
    fputc('\n', fp);
    
    free(realEstateData);
    realEstateData = NULL;
    free(personData);
    personData = NULL;
    fclose(fp);
    fp = NULL;
}

/*OWNERS FUNCTIONS*/
void enterRealEstateOwnersData(person *personData) {
    
    printf("Enter data for an owner:\n");
    printf("First name: ");
    scanf("%s", personData->firstName);
    printf("Middle name: ");
    scanf("%s", personData->middleName);
    printf("Last name: ");
    scanf("%s", personData->lastName);

    printf("City: ");
    scanf("%s", personData->personAddress.city);
    fflush(stdin);

    printf("Street: ");
    fgets(personData->personAddress.streetName, 50, stdin);
    personData->personAddress.streetName[strlen(personData->personAddress.streetName) - 1] = '\0';

    printf("Street number: ");
    scanf("%u", &personData->personAddress.streetNumber);
    printf("Enter the entrance of the building: ");
    fflush(stdin);
    scanf("%c", &personData->personAddress.entrance);
    printf("Floor: ");
    scanf("%d", &personData->personAddress.floor);
    printf("Enter the apartment number: ");
    scanf("%d", &personData->personAddress.apartmentNumber);
    printf("EGN: ");
    scanf("%s", personData->EGN);
    printf("Enter passport data:\n");
    printf("\tPassport number: ");
    scanf("%u", &personData->passportData.passportNumber);
    printf("\tDay of issue: ");
    scanf("%d", &personData->passportData.passportDateOfIssue.day);
    printf("\tMonth of issue: ");
    scanf("%d", &personData->passportData.passportDateOfIssue.month);
    printf("\tYear of issue: ");
    scanf("%d", &personData->passportData.passportDateOfIssue.year);
    printf("\tDay of expiry: ");
    scanf("%d", &personData->passportData.passportDateOfExpiry.day);
    printf("\tMonth of expiry: ");
    scanf("%d", &personData->passportData.passportDateOfExpiry.month);
    printf("\tYear of expiry: ");
    scanf("%d", &personData->passportData.passportDateOfExpiry.year);
    printf("Enter number of deed document: ");
    scanf("%u", &personData->numberOfDeedDoc);
    printf("Enter date of the deed document:\n");
    printf("\tDay: ");
    scanf("%d", &personData->deedDocDate.day);
    printf("\tMonth: ");
    scanf("%d", &personData->deedDocDate.month);
    printf("\tYear: ");
    scanf("%d", &personData->deedDocDate.year);
    printf("Percentage owned in the real estate: ");
    scanf("%u", &personData->percentageOwnedInEstate);

}
/*being on the right line extracts data for a person*/
/*removed fgetc(stream), added',' instead*/
void extractPersonData(FILE* stream, person* dataContainer) {
    
    fscanf(stream, "%[^,],", dataContainer->firstName);
    fscanf(stream, "%[^,],", dataContainer->middleName);
    fscanf(stream, "%[^,],", dataContainer->lastName);
    fscanf(stream, "%[^,],", dataContainer->personAddress.city);
    fscanf(stream, "%[^,],", dataContainer->personAddress.streetName);

    fscanf(stream, CSV_FORMAT_PERSON_OUT_1, &dataContainer->personAddress.streetNumber, &dataContainer->personAddress.entrance, &dataContainer->personAddress.floor,
                    &dataContainer->personAddress.apartmentNumber);

    fscanf(stream, "%[^,],", dataContainer->EGN);
    
    fscanf(stream, CSV_FORMAT_PERSON_OUT_2, &dataContainer->passportData.passportNumber, &dataContainer->passportData.passportDateOfIssue.day, &dataContainer->passportData.passportDateOfIssue.month, 
                    &dataContainer->passportData.passportDateOfIssue.year, &dataContainer->passportData.passportDateOfExpiry.day, &dataContainer->passportData.passportDateOfExpiry.month, &dataContainer->passportData.passportDateOfExpiry.year,
                    &dataContainer->numberOfDeedDoc, &dataContainer->deedDocDate.day, &dataContainer->deedDocDate.month, &dataContainer->deedDocDate.year, &dataContainer->percentageOwnedInEstate);
}
/*Print data for a person*/
void printPersonData(person *data) {
    printf("----------Owner----------\n");
    printf("firstname: %s\n", data->firstName);
    printf("middleName: %s\n", data->middleName);
    printf("lastName: %s\n", data->middleName);
    printf(PRINT_ADDRESS_FORMAT, data->personAddress.city, data->personAddress.streetName, data->personAddress.streetNumber, data->personAddress.entrance, data->personAddress.floor, data->personAddress.apartmentNumber);
    printf("EGN: %s\n", data->EGN);
    printf("Passport: %u \n", data->passportData.passportNumber);
    printf("\tDate of issue: " PRINT_DATE_FORMAT "\n", data->passportData.passportDateOfIssue.day, data->passportData.passportDateOfIssue.month, data->passportData.passportDateOfIssue.year);
    printf("\tDate of expiry: " PRINT_DATE_FORMAT "\n", data->passportData.passportDateOfExpiry.day, data->passportData.passportDateOfExpiry.month, data->passportData.passportDateOfExpiry.year);
    printf("Number of deed: %u\n", data->numberOfDeedDoc);
    printf("Document date: " PRINT_DATE_FORMAT "\n", data->deedDocDate.day, data->deedDocDate.month, data->deedDocDate.year);
    printf("Percentage owned: %u%%\n",data->percentageOwnedInEstate);
}
/*gives the number of owners between 2 real estates in the file*/
int getNumberOfOwners(FILE* stream) {
    char buffer[20];
    int countOwners = 0;
    int pointerPos = ftell(stream);

    fscanf(stream, "%[^,]s", buffer);
    if(!isNumber(buffer) && !feof(stream)) {
        countOwners++;
    }

    while(!isNumber(buffer) && !feof(stream)) {
        if((fgetc(stream)) == '\n') {
            fscanf(stream, "%[^,]s", buffer);
            if(!isNumber(buffer) && strlen(buffer) > 1) {
                strcpy(buffer, "");
                countOwners++;
            }
        }
    }
    if(!feof(stream) || countOwners != 0)
        fseek(stream, pointerPos, SEEK_SET);

    return countOwners;
}

/*REAL ESTATE FUNCTIONS*/
void enterRealEstateData(realEstate* realEstateData) {
    printf("Enter data for the real estate:\n");
    printf("Enter unique real estate number: ");
    scanf("%d", &realEstateData->uniqueEstateNumber);
    printf("Enter cadastre number: ");
    scanf("%u", &realEstateData->cadastreNumber);
    fflush(stdin);

    printf("Enter the city of the real estate: ");
    scanf("%[^\n]s", realEstateData->estateAddress.city);
    fflush(stdin);
    
    printf("Enter the street name of the real estate: ");
    fgets(realEstateData->estateAddress.streetName, 50, stdin);
    realEstateData->estateAddress.streetName[strlen(realEstateData->estateAddress.streetName) - 1] = '\0';

    printf("Street number of the real estate: ");
    scanf("%u", &realEstateData->estateAddress.streetNumber);
    fflush(stdin);

    printf("Enter the entrance of the building: ");
    scanf("%c", &realEstateData->estateAddress.entrance);
    printf("Enter the floor of the real estate: ");
    scanf("%d", &realEstateData->estateAddress.floor);
    printf("Enter the apartment number: ");
    scanf("%d", &realEstateData->estateAddress.apartmentNumber);

}
/*being on the right line extracts data for a estate*/
void extractEstateData(FILE* stream, realEstate* dataContainer) {

    fscanf(stream, CSV_FORMAT_ESTATE_OUT_1,  &dataContainer->uniqueEstateNumber, &dataContainer->cadastreNumber);

    fscanf(stream, "%[^,],", dataContainer->estateAddress.city);
    fscanf(stream, "%[^,],", dataContainer->estateAddress.streetName);

    fscanf(stream, CSV_FORMAT_ESTATE_OUT_2, &dataContainer->estateAddress.streetNumber,
                &dataContainer->estateAddress.entrance, &dataContainer->estateAddress.floor, &dataContainer->estateAddress.apartmentNumber);
}
/*prints data for real estate - NEED To MODIFY*/
void printRealEstateData(realEstate* data) {
    printf(PRINT_REAL_ESTATE_DATA_FORMAT_HEADER);
    printf(PRINT_REAL_ESTATE_DATA_FORMAT, data->uniqueEstateNumber, data->cadastreNumber,
                data->estateAddress.city, data->estateAddress.streetName, data->estateAddress.streetNumber,
                data->estateAddress.entrance, data->estateAddress.floor, data->estateAddress.apartmentNumber);
}

/*1. Ref - can be modified*/
int checkCadastreNumber(FILE *stream, int number) {
    char buffer[20];
    int filePointerPosition;
    unsigned cadaster;

    filePointerPosition = ftell(stream);
    fscanf(stream, "%[^,]s", buffer);
        if(isNumber(buffer)) {
            fgetc(stream);
            fscanf(stream, "%u", &cadaster);

            if(cadaster == number) {
                fseek(stream, filePointerPosition, SEEK_SET);
                return 1;
            }
        }
    
    while(!feof(stream)) {
        
        if((fgetc(stream)) == '\n') {
            filePointerPosition = ftell(stream);
            
            fscanf(stream, "%[^,]s", buffer);

            if(isNumber(buffer)) {
                fgetc(stream);
                fscanf(stream, "%u", &cadaster);

                if(cadaster == number) {
                    fseek(stream, filePointerPosition, SEEK_SET);
                    return 1;
                }
            }
        }
    }

    return 0;
}
void printOptionWithCadastre() {
    FILE *fp = NULL;
    if((fp = fopen("realEstateData.CSV", "r")) == NULL) {
        printf("Failed to open the file\n");
        printf("Error: %d -> %s\n", errno, strerror(errno));
        exit(1);
    }

    int cadastre;
    printf("Please enter cadastre number: ");
    scanf("%d", &cadastre);

    realEstate *realEstateData = (realEstate*)malloc(sizeof(realEstate));
    checkAllocationError(realEstateData);

    if(checkCadastreNumber(fp, cadastre)) {
        extractEstateData(fp, realEstateData);
        printRealEstateData(realEstateData);
        
        int owners = getNumberOfOwners(fp);
        person *personData = (person*)malloc(owners * sizeof(person));
        checkAllocationError(personData);

        if(owners == 0)
            printf("This estate does not have owners yet!\n");

        for(int i = 0; i < owners; i++) {
            extractPersonData(fp, &personData[i]);
        }

        qsort(personData, owners, sizeof(person), comparePercentages);

        for(int i = 0; i < owners; i++) {
            realEstateData->owners[i] = &personData[i];
            printPersonData(realEstateData->owners[i]);
        }

        free(personData);
        personData = NULL;

    } else {
        printf("Couldn't find real estate with this cadaste!\n");
    }
    
    free(realEstateData);
    realEstateData = NULL;
    fclose(fp);
    fp = NULL;
}

/*2.Ref*/
void enterEstateAddress(char *dataContainer) {
    char address[50];
    char city[20];
    char streetNumber[3];

    fflush(stdin);
    printf("City: ");
    scanf("%[^\n]s", city);
    strcpy(dataContainer, city);
    strcat(dataContainer, ",");
    fflush(stdin);

    printf("Street name: ");
    scanf("%[^\n]s", address);
    // fgets(address, 50, stdin);
    // address[strlen(address) - 1] = '\0';
    strcat(dataContainer, address);
    strcat(dataContainer, ",");

    printf("Street number: ");
    scanf("%s", streetNumber);
    strcat(dataContainer, streetNumber);

}
void checkAddressAndPrintOwners(FILE* stream, char* streetAddress, person *dataContainer) {
    char fileBuffer[100];
    char helpBuffer[50];
    int owners = 0, i = 0;

    while(!feof(stream)) {
        if(ftell(stream) == 0 || fgetc(stream) == '\n') {
            fscanf(stream, "%[^,],", fileBuffer);

            if(isNumber(fileBuffer)) {
                fscanf(stream, "%[^,],", fileBuffer);

                fscanf(stream, "%[^,],", helpBuffer);
                strcpy(fileBuffer, helpBuffer);
                strcat(fileBuffer, ",");
                
                fscanf(stream, "%[^,],", helpBuffer);
                strcat(fileBuffer, helpBuffer);
                strcat(fileBuffer, ",");

                fscanf(stream, "%[^,],", helpBuffer);
                strcat(fileBuffer, helpBuffer);

                while(fgetc(stream) != '\n') {
                    ;
                }
                int pos = ftell(stream);
                fseek(stream, pos - 1, SEEK_SET);
            }

            if(strcmp(streetAddress, fileBuffer) == 0) {

                owners = getNumberOfOwners(stream);
                
                dataContainer = (person*)realloc(dataContainer, owners * sizeof(person));
                fgetc(stream);
                for(; i < owners; i++) {
                    extractPersonData(stream, &dataContainer[i]);
                }

                break;
            }
        }  
    }

    if(owners == 0)
        printf("This real estate has no owners yet!\n");

    for(int i = 0; i < owners; i++) {
        qsort(dataContainer, owners, sizeof(person), compareNames);
        printPersonData(&dataContainer[i]);
    }
}
void printOptionWithStreet() {
    FILE *fp = NULL;
    if((fp = fopen("realEstateData.CSV", "r")) == NULL) {
        printf("Failed to open the file\n");
        printf("Error: %d -> %s\n", errno, strerror(errno));
        exit(1);
    }

    person *ownersData = (person*)malloc(sizeof(person));
    checkAllocationError(ownersData);

    char estateAddress[100];
    enterEstateAddress(estateAddress);
    checkAddressAndPrintOwners(fp, estateAddress, ownersData);

    free(ownersData);
    ownersData = NULL;
    fclose(fp);
    fp = NULL;
}

/*3.Ref*/
unsigned extractPassportNumber(FILE *stream) {
    char buffer[50];
    int filePointerPosition = ftell(stream);
    unsigned ret;
    char *ptr;

    for(int i = 0; i < 10; i ++) 
        fscanf(stream, "%[^,],", buffer);

    fscanf(stream, "%[^,]s", buffer);

    fseek(stream, filePointerPosition, SEEK_SET);

    ret = strtoul(buffer, &ptr, 10);
    
    return ret;
}
void printOptionWithPassportNumber() {
    FILE *fp = NULL;
    if((fp = fopen("realEstateData.CSV", "r")) == NULL) {
        printf("Failed to open the file\n");
        printf("Error: %d -> %s\n", errno, strerror(errno));
        exit(1);
    }

    unsigned passportNumber;
    printf("Enter person's passport number: ");
    scanf("%u", &passportNumber);
    
    person *owner = (person*)malloc(sizeof(person));
    checkAllocationError(owner);
    
    realEstate *temp = (realEstate*)malloc(sizeof(realEstate));
    checkAllocationError(temp);

    realEstate *estatesPersonOwnes = (realEstate*)malloc(sizeof(realEstate));
    checkAllocationError(estatesPersonOwnes);

    int numOfOwnedEstates = 0;
    int flag = 0;
    int ownersOfOneEstate;

    /*for the first estate*/
    while(flag == 0 && !feof(fp)) {
        extractEstateData(fp, temp);
        ownersOfOneEstate = getNumberOfOwners(fp);
        
        for(int i = 0; i < ownersOfOneEstate; i++) {
            if((extractPassportNumber(fp) == passportNumber) && (flag == 0)) {
                extractPersonData(fp, owner);
                numOfOwnedEstates++;
                estatesPersonOwnes[0] = *temp;
                flag = 1;
            } else {
                goToNextLine(fp);
            }
        }
    }
    
    if(flag == 0)
        printf("There is not a person with such passport number!\n");
    else
    {
        while(!feof(fp)) {
            extractEstateData(fp, temp);
            ownersOfOneEstate = getNumberOfOwners(fp);

            for(int i = 0; i < ownersOfOneEstate; i++) {
                if(extractPassportNumber(fp) == passportNumber) {
                    numOfOwnedEstates++;
                    estatesPersonOwnes = (realEstate*)realloc(estatesPersonOwnes, numOfOwnedEstates * sizeof(realEstate));
                    checkAllocationError(estatesPersonOwnes);
                    estatesPersonOwnes[numOfOwnedEstates - 1] = *temp;
                    goToNextLine(fp);
                    goToNextEstate(fp);
                    break;
                } 
                else {
                    goToNextLine(fp);
                }
            }     
        }

        printPersonData(owner);
        printf("-----Estates-----\n");
        for(int i = 0; i < numOfOwnedEstates; i++) {
            printRealEstateData(&estatesPersonOwnes[i]);
        }
    }

    free(temp);
    temp = NULL;
    free(owner);
    owner = NULL;
    free(estatesPersonOwnes);
    estatesPersonOwnes = NULL;
    fclose(fp);
    fp = NULL;
}

int comparePercentages(const void *a, const void *b) {
    person *r1 = (person*)a;
    person *r2 = (person*)b;
    return (r2->percentageOwnedInEstate - r1->percentageOwnedInEstate);
}
int compareNames(const void *a, const void *b) {
    person *r1 = (person*)a;
    person *r2 = (person*)b;

    return strcmp(r1->firstName, r2->firstName);
}
int isNumber(const char *s) {
    for(int i = 0; i < strlen(s); i++) {
        if(isdigit(s[i]) != 0) {
            return 1;
        }
    }
    return 0;
}
void checkValue(int* owners, const char* prompt) {
    do {
        printf(prompt);
        scanf("%d", owners);
    }while(*owners > 10);
}
void goToNextLine(FILE *stream) {
    while(fgetc(stream) != '\n' && !feof(stream)) {
        ;
    }
}
void goToNextEstate(FILE* stream) {
    char buffer[50];
    int filePointerPos = ftell(stream);

    fscanf(stream, "%[^,]s", buffer);

    while(!isNumber(buffer) && !feof(stream)) {
        goToNextLine(stream);
        filePointerPos = ftell(stream);
        fscanf(stream, "%[^,]s", buffer);
    }

    fseek(stream, filePointerPos, SEEK_SET);
}