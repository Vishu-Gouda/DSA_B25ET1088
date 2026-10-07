#include <stdio.h>

typedef struct student
{
    int roll;
    char name[10];
    float sgpa;
} student;

student st[100];

void create(student st[], int N);
void display(student st[], int N);

int main()
{
    int N;

    printf("Enter number of students: ");
    scanf("%d", &N);

    create(st, N);
    display(st, N);

    return 0;
}

void create(student st[], int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("\nEnter Roll No: ");
        scanf("%d", &st[i].roll);

        printf("Enter Name: ");
        scanf("%s", st[i].name);

        printf("Enter SGPA: ");
        scanf("%f", &st[i].sgpa);
    }
}

void display(student st[], int N)
{
    printf("\nStudent Details:\n");

    for(int i = 0; i < N; i++)
    {
        printf("\nRoll = %d", st[i].roll);
        printf("\nName = %s", st[i].name);
        printf("\nSGPA = %.2f\n", st[i].sgpa);
    }
}