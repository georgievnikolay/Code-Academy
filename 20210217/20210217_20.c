/*Напишете програма, която да създаде стек (LIFO) от 16 елемента,
който има следното API
int pop()
void push()
int top()
int isFull()
Вариация: Пробвайте с опашка(FIFO), но вече вие предложете API
и го изпробвайте в main().*/
#include <stdio.h>

int MAXSIZE = 16;
int queue[16];
int front = 0, back = 0;

void enQueue(int data);
int deQueue();
int isFull();
int isEmpty();
int peek();

int main()
{
    //Insert items in the queue untill it's full
    enQueue(3);
    enQueue(5);
    enQueue(9);
    enQueue(1);
    enQueue(12);
    enQueue(15);
    enQueue(4);
    enQueue(6);
    enQueue(10);
    enQueue(16);
    enQueue(14);
    enQueue(11);
    enQueue(120);
    enQueue(196);
    enQueue(22);

    printf("First element in the queue: %d\n", peek());
    printf("Elements : \n");
    //Check if it's full or empty with the functions we wrote
    printf("Queue full: %s\n", isFull() ? "True" : "False");
    printf("Queue empty: %s\n", isEmpty() ? "True" : "False");

    //Now we empty the queue
    while (!isEmpty())
    {
        int data = deQueue();
        printf("%d\n", data);
    }

    //Check if it's full or empty with the functions we wrote
    printf("Queue full: %s\n", isFull() ? "True" : "False");
    printf("Queue empty: %s\n", isEmpty() ? "True" : "False");
}
//Adding value to the end of a queue
void enQueue(int data)
{
    if (!isFull())
    {
        queue[back] = data;
        back = (back + 1) % MAXSIZE;
    }
    else
    {
        printf("Could not insert data. Queue is full\n");
    }
}
//Removing an element from front of the queue
int deQueue()
{
    int element;
    if (!isEmpty())
    {
        element = queue[front];
        front++;
        if (front == MAXSIZE)
        {
            front = 0;
        }
        return element;
    }
    else
    {
        return printf("Could not retrieve data. Queue is empty\n");
    }
}
//If the back is 1 position less than the front then the queue is full
int isFull()
{
    if (((back + 1) % MAXSIZE) == front)
    {
        return 1;
    }
    return 0;
}
//If back equals front the queue is empty
int isEmpty()
{
    if (front == back)
    {
        return 1;
    }
    return 0;
}
//function to check the oldest entered element in the queue
int peek()
{
    return queue[front];
}
