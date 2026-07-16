
#include <stdio.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if ((rear + 1) % N == front)
    {
        printf("Queue Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow\n");
    }
    else if (front == rear)
    {
        printf("Deleted Element = %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted Element = %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Front Element = %d\n", queue[front]);
    }
}

void display()
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue: ");
        i = front;

        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }

        printf("%d\n", queue[rear]);
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(50);
    enqueue(60);

    display();

    peek();

    return 0;
}
