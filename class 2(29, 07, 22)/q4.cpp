// WAP to calculate area of triangle whoose 3 sides are given

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter 1st side: " << endl;
    cin >> a;

    cout << "Enter 2nd side: " << endl;
    cin >> b;

    cout << "Enter 3rd side: " << endl;
    cin >> c;

    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "area is " << area << endl;

    return 0;
}