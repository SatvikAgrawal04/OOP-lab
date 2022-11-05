#include <stdio.h>

struct employee
{
    int id;
    char name[25];
    int age;
    float salary;
    float GrossSalary;
};

void GrossCalculate(struct employee emp[], int n)
{
    float da, hra;
    for (int i = 0; i < n; i++)
    {
        da = (emp[i].salary * (8.0 / 10));
        hra = (emp[i].salary * (1.0 / 10));
        emp[i].GrossSalary = emp[i].salary + hra + da;
    }
}

int main()
{

    int n;
    printf("Enter no. of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &emp[i].id);
        printf("Enter the name of employee %d: ", i + 1);
        getchar();
        scanf("%[^\n]s", emp[i].name);
        printf("Enter the age of employee %d: ", i + 1);
        scanf("%d", &emp[i].age);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &emp[i].salary);
    }

    GrossCalculate(emp, n);

    printf("ID\t\tNAME\t\tAGE\t\tSALARY\t\tGROSS SALARY");
    printf("\n------------------------------------------------------------------------------------");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].age, emp[i].salary, emp[i].GrossSalary);
    }

    return 0;
}