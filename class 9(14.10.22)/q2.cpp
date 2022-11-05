#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id, sal;

public:
    void getdata()
    {
        cin.ignore();
        cout << "\nEnter name of the employee:- ";
        getline(cin, name);
        cout << "\nEnter Id:\n";
        cin >> id;
    }
    void putdata()
    {
        cout << "\nName:- " << name << "\nId:- " << id;
    }
};
class Regular : public Employee
{
    int da, hra, bs;

public:
    void regsal()
    {
        getdata();
        cout << "\nEnter DA, HRA and basic salary:\n";
        cin >> da >> hra >> bs;
    }
    void putsal()
    {
        cout << "\nDetails of the regular employee:\n";
        putdata();
        cout << "\nSalary:- " << (da + hra + bs);
    }
};
class part_time : public Employee
{
    int hr, pay;

public:
    void partsal()
    {
        getdata();
        cout << "\nEnter hours and pay per hour:\n";
        cin >> hr >> pay;
    }
    void putsal()
    {
        cout << "\nDetails of the part-time employee:\n";
        putdata();
        cout << "\nSalary:- " << (hr * pay);
    }
};
int main()
{
    Regular ob1;
    part_time ob2;
    cout << "REGULAR" << endl;
    ob1.regsal();
    ob1.putsal();
    cout << "PART TIME" << endl;
    ob2.partsal();
    ob2.putsal();
    return 0;
}