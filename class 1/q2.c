#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int marks[5];
    int totalMarks;
    float totalPercentage;
};

void printDetails(struct student stud[], int n, int r)
{
    for (int i = 0; i < n; i++)
    {
        if (stud[i].roll == r)
        {
            printf("\nname: %s\nroll: %d\n", stud[i].name, stud[i].roll);
            printf("marks:\n");
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", stud[i].marks[j]);
            }
            printf("\nTotal marks: %d\nTotal percentage: %.2f\n", stud[i].totalMarks, stud[i].totalPercentage);
            printf("-----------------------------------------------------");
        }
    }
}

void Total(struct student stud[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = 0; j < 5; j++)
        {
            total += stud[i].marks[j];
        }
        stud[i].totalMarks = total;
        stud[i].totalPercentage = (stud[i].totalMarks / 500.0) * 100;
    }
}

void DisplayPercentInRange(struct student stud[], int n, float a, float b)
{
    for (int i = 0; i < n; i++)
    {
        if (stud[i].totalPercentage > a && stud[i].totalPercentage < b)
        {
            printf("\nname : %s\nroll : %d\n", stud[i].name, stud[i].roll);
            printf("marks:\n");
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", stud[i].marks[j]);
            }
            printf("\nTotal Marks : %d\nTotal Percentage : %.2f\n", stud[i].totalMarks, stud[i].totalPercentage);
            printf("-----------------------------------------------------");
        }
    }
}

void sortStudents(struct student stud[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (stud[j].totalMarks > stud[j + 1].totalMarks)
            {
                struct student temp = stud[j];
                stud[j] = stud[j + 1];
                stud[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nname : %s\nroll : %d\n", stud[i].name, stud[i].roll);
        printf("marks:\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", stud[i].marks[j]);
        }
        printf("\nTotal Marks : %d\nTotal Percentage : %.2f\n", stud[i].totalMarks, stud[i].totalPercentage);
        printf("-----------------------------------------------------\n");
    }
}

int main()
{
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);

    struct student stud[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        getchar();
        scanf("%[^\n]s", stud[i].name);
        printf("Enter the roll no. of student %d: ", i + 1);
        scanf("%d", &stud[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("enter marks of subject %d: ", j + 1);
            scanf("%d", &stud[i].marks[j]);
        }
    }

    int c;
MENU:
    printf("\n-----------------------------------------------------");
    printf("\n1. Display total marks and percentage\n");
    printf("2. Search by roll no.\n");
    printf("3. Display details of student in percent range\n");
    printf("4. Display all student details sorted in order of total marks\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    printf("\n-----------------------------------------------------");

    Total(stud, n);
    int r;
    float a, b;

    switch (c)
    {
    case 0:
        break;

    case 1:
        for (int i = 0; i < n; i++)
        {
            printf("\nname : %s\nroll : %d\n", stud[i].name, stud[i].roll);
            printf("marks:\n");
            for (int j = 0; j < 5; j++)
            {
                printf("%d ", stud[i].marks[j]);
            }
            printf("\nTotal Marks : %d\nTotal Percentage : %.2f\n", stud[i].totalMarks, stud[i].totalPercentage);
            printf("-----------------------------------------------------\n");
        }
        goto MENU;

    case 2:
        printf("\nEnter the roll you want to search: ");
        scanf("%d", &r);
        printDetails(stud, n, r);
        goto MENU;

    case 3:
        printf("\nEnter minimum and maximum percentage: ");
        scanf("%f %f", &a, &b);
        DisplayPercentInRange(stud, n, a, b);
        goto MENU;

    case 4:
        sortStudents(stud, n);
        goto MENU;

    default:
        printf("Invalid Input...\n");
        goto MENU;
    }
    return 0;
}