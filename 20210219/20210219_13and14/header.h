#define LIST_SIZE 2

struct manager
{
    int number;
    char firstName[20];
    char surname[20];
    char lastName[20];
    char position[20];
    int workExperience;
    float salary;
};
struct employee
{
    int number;
    char firstName[20];
    char surname[20];
    char lastName[20];
    char position[20];
    int workExperience;
    float salary;
    struct manager *pManager;
};

void enterEmployees(struct employee *array, int index);
void enterManagers(struct manager *array, int index);
void printList(struct employee *arrayE, struct manager *arrayM);