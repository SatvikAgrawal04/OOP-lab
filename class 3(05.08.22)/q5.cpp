#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    int age;
    float sal;
    float gross_sal;

    void grossSal(float sal)
    {
        float da = (80.0 / 100) * sal;
        float hra = (10.0 / 100) * sal;

        gross_sal = sal + da + hra;
    }
};

int main()
{
    int n;
    cout << "Enter no. of employees" << endl;
    cin >> n;

    employee emp[n];

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter details of employee " << i + 1 << endl;

        cout << "ID" << endl;
        cin >> emp[i].id;
        cout << "Name" << endl;
        cin >> emp[i].name;
        cout << "Age" << endl;
        cin >> emp[i].age;
        cout << "Salary" << endl;
        cin >> emp[i].sal;

        emp[i].grossSal(emp[i].sal);
    }

    cout << endl;
    cout << "ID\tNAME\tAGE\tSALARY\tGROSS_SAL" << endl
         << "------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << emp[i].id << "\t" << emp[i].name << "\t" << emp[i].age << "\t" << emp[i].sal << "\t" << emp[i].gross_sal << endl;
    }

    return 0;
}