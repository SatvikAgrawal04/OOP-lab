#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int roll;
    string branch;

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }
    void putData()
    {
        cout << "Name : " << name << endl
             << "Roll : " << roll << endl
             << "Branch : " << branch << endl;
    }
};
class InternalExam : virtual public Student
{
protected:
    int intMarks[5];

public:
    void getIntMarks()
    {
        cout << "Enter internal marks for 5 subjects(out of 30): " << endl;
        for (int i = 0; i < 5; i++)
            cin >> intMarks[i];
    }
    void putIntMarks()
    {
        cout << "Marks of 5 subjects are" << endl;
        for (int i = 0; i < 5; i++)
            cout << intMarks[i] << " ";
        cout << endl;
    }
};
class MidSemExam : virtual public Student
{
protected:
    int midSemMarks[5];

public:
    void getMidMarks()
    {
        cout << "Enter Mid Sem marks for 5 subjects(out of 20): " << endl;
        for (int i = 0; i < 5; i++)
            cin >> midSemMarks[i];
    }
    void putMidMarks()
    {
        cout << "Marks of 5 subjects are" << endl;
        for (int i = 0; i < 5; i++)
            cout << midSemMarks[i] << " ";
        cout << endl;
    }
};
class EndSemExam : virtual public Student
{
protected:
    int endSemMarks[5];

public:
    void getEndMarks()
    {
        cout << "Enter End Sem marks for 5 subjects(out of 50): " << endl;
        for (int i = 0; i < 5; i++)
            cin >> endSemMarks[i];
    }
    void putEndMarks()
    {
        cout << "Marks of 5 subjects are" << endl;
        for (int i = 0; i < 5; i++)
            cout << endSemMarks[i] << " ";
        cout << endl;
    }
};
class result : virtual public InternalExam, virtual public MidSemExam, virtual public EndSemExam
{
    int total = 0;
    float per;

public:
    void calTotal()
    {
        for (int i = 0; i < 5; i++)
            total += intMarks[i];
        for (int i = 0; i < 5; i++)
            total += midSemMarks[i];
        for (int i = 0; i < 5; i++)
            total += endSemMarks[i];
        per = total / 5.0;
    }
    void res()
    {
        cout << "Total Marks are: " << total << endl
             << "Percent: " << per << endl;
    }
};
int main()
{
    result s1;
    cout << "Enter Details: " << endl;
    s1.getData();
    // cout << "Enter Internal Marks " << endl;
    s1.getIntMarks();
    // cout << "Enter Mid Sem Marks " << endl;
    s1.getMidMarks();
    // cout << "Enter Mid Sem Marks " << endl;
    s1.getEndMarks();
    s1.putData();
    s1.putIntMarks();
    s1.putMidMarks();
    s1.putEndMarks();
    s1.calTotal();
    s1.res();
    return 0;
}