// 2.Create a class which stores employee name, id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a par-time employee, using virtual function.

#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id, sal;

public:
    void getData()
    {
        cin.ignore();
        cout << "\nEnter name of the employee:- ";
        getline(cin, name);
        cout << "\nEnter Id:\n";
        cin >> id;
    }
    void putData()
    {
        cout << "\nName:- " << name << "\nId:- " << id;
    }
};
class Regular : public Employee
{
    int da, hra, bs;

public:
    virtual void getData()
    {
        Employee::getData();
        cout << "\nEnter DA, HRA and basic salary:\n";
        cin >> da >> hra >> bs;
    }
    virtual void putData()
    {
        cout << "\nDetails of the regular employee:\n";
        Employee::putData();
        cout << "\nSalary:- " << (da + hra + bs);
    }
};
class part_time : public Employee
{
    int hr, pay;

public:
    virtual void getData()
    {
        Employee::getData();
        cout << "\nEnter hours and pay per hour:\n";
        cin >> hr >> pay;
    }
    virtual void putData()
    {
        cout << "\nDetails of the part-time employee:\n";
        Employee::putData();
        cout << "\nSalary:- " << (hr * pay);
    }
};
int main()
{
    Regular ob1;
    part_time ob2;
    cout << "REGULAR" << endl;
    ob1.getData();
    ob1.putData();
    cout << "\nPART TIME" << endl;
    ob2.getData();
    ob2.putData();
    return 0;
}