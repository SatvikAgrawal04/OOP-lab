// Create a class Student which stores name, roll number and total marks for a student. Input the data for a student and display it.

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    student s1;

    cout << "Enter name:" << endl;
    cin >> s1.name;

    cout << "Roll no" << endl;
    cin >> s1.roll;

    cout << "Enter total marks" << endl;
    cin >> s1.marks;

    cout << "NAME\tROLL\tMARKS" << endl;
    cout << s1.name << "\t" << s1.roll << "\t" << s1.marks << endl;
    return 0;
}