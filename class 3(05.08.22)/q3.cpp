// Modify the program ii) to store marks in 5 subjects. Calculate the total marks and percentage of a student and display it using function. (Function should be defined outside the class)

#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll;
    float marks[5];
    float total_marks;
    float percentage;

    void total(student s1);
};

void student::total(student s1)
{
    int t = 0;
    for (int i = 0; i < 5; i++)
        t += s1.marks[i];

    total_marks = t;
    percentage = (t / 500.0) * 100;
}

int main()
{
    student s1;

    cout << "Enter name:" << endl;
    cin >> s1.name;

    cout << "Roll no" << endl;
    cin >> s1.roll;

    cout << "Enter marksfor 5 subjects" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> s1.marks[i];
    }

    s1.total(s1);

    cout << "NAME\tROLL\tTOTAL\tPERCENTAGE" << endl;
    cout << s1.name << "\t" << s1.roll << "\t" << s1.total_marks << "\t" << s1.percentage << endl;

    return 0;
}