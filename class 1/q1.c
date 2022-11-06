#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int marks[5];
};

int main()
{
    struct student stud;

    printf("Enter name of student: ");
    scanf("%[^\n]s", stud.name);
    printf("\nEnter roll no.: ");
    scanf("%d", &stud.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of subjest %d ", i + 1);
        scanf("%d", &stud.marks[i]);
    }

    printf("\nname of student is %s", stud.name);
    printf("\nroll of student is %d", stud.roll);
    printf("\nMarks in 5 subjects are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", stud.marks[i]);
    }

    return 0;
}