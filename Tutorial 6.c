#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// Push operation
void push(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// Pop operation
void pop()
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped: %d\n", top->data);
    top = top->next;

    free(temp);
}

// Display operation
void display()
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }

    temp = top;

    printf("Stack: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    push(50);
    push(70);
    push(90);

    display();

    pop();

    display();

    return 0;
}