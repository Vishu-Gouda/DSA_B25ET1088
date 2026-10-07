#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int queue[MAX];
int front = -1;
int rear = -1;

void push()
{
    int value;

    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("%d pushed to stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped = %d\n", stack[top]);
        top--;
    }
}

void displayStack()
{
    if (top == -1)
        printf("Stack is empty.\n");
    else
    {
        printf("Stack elements:\n");

        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

void enqueue()
{
    int value;

    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d enqueued to queue.\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Dequeued = %d\n", queue[front]);
        front++;
    }
}

void displayQueue()
{
    if (front == -1 || front > rear)
        printf("Queue is empty.\n");
    else
    {
        printf("Queue elements:\n");

        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- MAIN MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Enqueue\n");
        printf("5. Dequeue\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                displayStack();
                break;

            case 4:
                enqueue();
                break;

            case 5:
                dequeue();
                break;

            case 6:
                displayQueue();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}