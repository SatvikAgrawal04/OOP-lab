#include <iostream>
#include <math.h>
using namespace std;

class figure
{
public:
    void area(int rad)
    {
        cout << "area is " << 3.14 * rad * rad;
    }
    void area(int length, int width)
    {
        cout << "area is " << length * width;
    }
    void area(float a, float b, float c)
    {
        float s = (a + b + c) / 2.0;
        cout << "area is " << sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    figure fig;
    cout << "Select figure" << endl
         << "1. Circle" << endl
         << "2. Rectangle" << endl
         << "3. Triangle" << endl;

    int c;
    cin >> c;

    switch (c)
    {
    case 2:
        cout << "Enter Length and breath" << endl;
        int l, w;
        cin >> l >> w;
        fig.area(l, w);
        break;

    case 1:
        cout << "Enter radius" << endl;
        int r;
        cin >> r;

        fig.area(r);
        break;

    case 3:
        cout << "Enter 3 sides" << endl;
        float a, b, c;
        cin >> a >> b >> c;
        fig.area(a, b, c);
        break;

    default:
        break;
    }

    return 0;
}