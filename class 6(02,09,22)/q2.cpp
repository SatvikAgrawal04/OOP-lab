#include <iostream>
using namespace std;

class Metric;
class Imperial
{
public:
    int feet;
    int inch;
    friend void compare(Imperial, Metric);
};

class Metric
{
public:
    int metre;
    int centimetre;
    friend void compare(Imperial, Metric);
};

void compare(Imperial ob1, Metric ob2)
{
    float imp = (ob1.inch + (ob1.feet * 12)) * 2.54;
    float met = ob2.centimetre + (ob2.metre * 100);
    if (imp > met)
        cout << ob1.feet << " feet and " << ob1.inch << " inch is greater" << endl;
    else
        cout << ob2.metre << " metre and " << ob2.centimetre << " centimetre is greater" << endl;
}

int main(int argc, char const *argv[])
{
    Imperial x;
    Metric y;
    cout << "Enter distance in ft and in" << endl;
    cin >> x.feet >> x.inch;
    cout << "Enter distance in m and cm" << endl;
    cin >> y.metre >> y.centimetre;
    compare(x, y);
    return 0;
}