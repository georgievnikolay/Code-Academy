#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

#define PRINT_DATE_FORMAT "%02d/%02d/%02d"
#define PRINT_ADDRESS_FORMAT "City: %s\nStreet: \"%s\"No%u, Building: %c, Floor: %d, Ap: %d\n"

#define CSV_FORMAT_ESTATE_OUT_1 "%d,%u,"
#define CSV_FORMAT_ESTATE_OUT_2 "%u,%c,%d,%u\n"

#define CSV_FORMAT_PERSON_OUT_1 "%u,%c,%d,%u,"
#define CSV_FORMAT_PERSON_OUT_2 "%u,%d/%d/%d,%d/%d/%d,%u,%d/%d/%d,%u\n"

#define CSV_FORMAT_ESTATE_IN "%d,%u,%s,%s,%u,%c,%d,%u"
#define CSV_FORMAT_PERSON_IN "\n%s,%s,%s,%s,%s,%u,%c,%d,%u,%s,%u,%d/%d/%d,%d/%d/%d,%u,%d/%d/%d,%u"

#define PRINT_REAL_ESTATE_DATA_FORMAT_HEADER  "Unique number:\tCadastre number:\tCity:\tStreet:\t\tFloor:\tApartment:\n"
#define PRINT_REAL_ESTATE_DATA_FORMAT "%d\t\t%u\t\t\t%s\t\"%s\"%u%c\t\t%d\t%u\n"

// #define PRINT_REAL_ESTATE_DATA_FORMAT_HEADER  "Unique number:\tCadastre number:\tCity:\tStreet:\t\tFloor:\tApartment:\n"
// #define PRINT_REAL_ESTATE_DATA_FORMAT "%d\t\t%u\t\t\t%s\t\"%s\"%u%c\t\t%d\t%u\n"

#define checkAllocationError(ptr) \
            if ((ptr) == NULL) { \
                printf("Failed to allocate memory.\n"); \
                exit(2); \
            }

typedef struct {
    int day;
    int month;
    int year;
} date;

typedef struct {
    char streetName[50];
    char city[30];
    unsigned streetNumber;
    unsigned apartmentNumber;
    char entrance;
    int floor;
} address;

typedef struct {
    unsigned passportNumber;
    date passportDateOfIssue;
    date passportDateOfExpiry;
} passport;

typedef struct {
    char firstName[20];
    char middleName[20];
    char lastName[20];
    address personAddress;
    char EGN[10];
    passport passportData;
    unsigned numberOfDeedDoc;
    date deedDocDate;
    unsigned percentageOwnedInEstate;

} person;

typedef struct {
    int uniqueEstateNumber;
    unsigned cadastreNumber;
    address estateAddress;
    person *owners[10];
} realEstate;

void menu();

void enterDataInFile();

void enterRealEstateOwnersData(person* personData);
void extractPersonData(FILE* stream, person* dataContainer);
void printPersonData(person *data);
int getNumberOfOwners(FILE* stream);

void enterRealEstateData(realEstate* realEstateData);
void extractEstateData(FILE* stream, realEstate* dataContainer);;
void printRealEstateData(realEstate* data);


int checkCadastreNumber(FILE *stream, int number);
void printOptionWithCadastre();

void printOptionWithStreet();
void enterEstateAddress(char* dataContainer);
void checkAddressAndPrintOwners(FILE* stream, char* streetAddress, person *dataContainer);

unsigned extractPassportNumber(FILE *stream);
void printOptionWithPassportNumber();


int comparePercentages(const void *a, const void *b);
int compareNames(const void *a, const void *b);
int isNumber(const char *s);
void checkValue(int* owners, const char* prompt);
void goToNextEstate(FILE* stream);
void goToNextLine(FILE *stream);