#include <iostream>
using namespace std;

class Centimetre
{
public:
    int cen;
    Centimetre() {}
};

class Distance
{
    float km, m, cm;

public:
    Distance() {}
    void operator=(Centimetre c)
    {
        km = c.cen / 100000.0;
        c.cen = c.cen % 100000;
        m = c.cen / 100;
        cm = c.cen % 100;
    }
    void disp()
    {
        cout << km << ":" << m << ":" << cm << endl;
    }
};

int main()
{
    Centimetre c;
    cout << "Enter centimetre: ";
    cin >> c.cen;
    Distance d;
    d = c;
    d.disp();
    return 0;
}