#include <iostream>
using namespace std;
class Time
{
public:
    int hh, mm, ss;
    Time()
    {
        cout << "Default constructor invoked" << endl;
        hh = 0;
        mm = 0;
        ss = 0;
    }
    Time(int h, int s, int m = 0)
    {
        cout << "Parameterized constructor invoked" << endl;
        hh = h;
        mm = m;
        ss = s;
        set();
    }
    Time(Time &obj)
    {
        cout << "Copy constructor invoked" << endl;
        hh = obj.hh;
        mm = obj.mm;
        ss = obj.ss;
    }
    void display();
    void set()
    {
        if (ss > 60)
        {
            mm++;
            ss -= 60;
        }

        if (mm >= 60)
        {
            hh++;
            mm -= 60;
        }
        hh = (hh >= 24) ? hh - 24 : hh;
    }
};
void Time::display()
{
    cout << "Time is " << hh << ":" << mm << ":" << ss << endl;
}
int main()
{
    int c, h, m, s;
    do
    {
        cout << "Time Menu:\n1) Enter data \n2) Enter only hours\n3) Do nothing\n0)EXIT\nEnter choice: ";
        cin >> c;
        switch (c)
        {
        case 0:
            break;
        case 1:
        {
            cout << "Enter hours, min, sec: ";
            cin >> h >> m >> s;
            Time ob1(h, s, m);
            Time obc(ob1);
            obc.display();
            break;
        }
        case 2:
        {
            cout << "Enter hours and seconds ";
            cin >> h >> s;
            cout << "Parameterized constructor with default arguements will be invoked" << endl;
            Time ob2(h, s);
            ob2.display();
            break;
        }
        case 3:
        {
            Time ob3;
            ob3.display();
            break;
        }
        default:
            cout << "Invalid choice input" << endl;
        }
    } while (c != 0);
    return 0;
}