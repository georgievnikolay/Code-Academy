/*Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents; -> 
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top() -> Предполагам има функционалността на peek()
int isFull(); int isEmpty(void)*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *contents;
    int top;
} Stack;

Stack *stack = NULL;
unsigned stackSize;
int top = -1;

Stack *create(int size);
void destroy();
int isFull();
int isEmpty();
void push(int);
int pop();
int peek();

int main()
{
    printf("What size you want your stack to be: ");
    scanf("%u", &stackSize);

    stack = create(stackSize);
    //printf("Address of the stack is: %p\n", stack);

    push(32);
    push(23);
    push(55);
    push(22);

    printf("on top is now: %d\n", peek());

    while (!isEmpty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull() ? "True" : "False");
    printf("Stack empty: %s\n", isEmpty() ? "True" : "False");

    destroy();

    return 0;
}
/*Dynamically allocate a stack given the size by user*/
Stack *create(int size)
{
    Stack *ptr = (Stack *)malloc(size * sizeof(Stack));
    if (NULL == ptr)
    {
        printf("Allocation error!\n");
        exit(1);
    }
    return ptr;
}
/*Free the dynamically allocated memory for the stack*/
void destroy()
{
    free(stack);
    stack = NULL;
}
/*Check if the stack is empty*/
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
/*Check if the stack is full*/
int isFull()
{
    if (top == stackSize)
    {
        return 1;
    }
    return 0;
}
/*Add element on the top of the stack*/
void push(int value)
{
    if (isFull(stackSize))
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        (stack + top)->top = value;
    }
}
/*Pop element from the top of the stack and return it*/
int pop()
{
    int temp;
    if (isEmpty())
    {
        printf("Stack is empty!\n");
    }
    else
    {
        temp = (stack + top)->top;
        top--;
        return temp;
    }
}
/*Peek the value of the top element of the stack*/
int peek()
{
    return (stack + top)->top;
}