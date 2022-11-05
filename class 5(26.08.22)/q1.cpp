#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inch;

    void add(Distance ob1, Distance ob2)
    {
        feet = ob1.feet + ob2.feet;
        inch = ob1.inch + ob2.inch;

        if (inch > 12)
        {
            feet += inch / 12;
            inch = inch % 12;
        }
    }

    Distance add(Distance ob)
    {
        Distance ob1;
        ob1.feet = feet + ob.feet;
        ob1.inch = inch + ob.inch;

        if (ob1.inch > 12)
        {
            ob1.feet += ob1.inch / 12;
            ob1.inch = ob1.inch % 12;
        }

        return ob1;
    }
};

int main()
{
    Distance c1, c2, c3, c4;
    cout << "Enter 1st Distance" << endl;
    cout << "Feet: ";
    cin >> c1.feet;
    cout << "Inch: ";
    cin >> c1.inch;

    cout << "Enter 2nd Distance" << endl;
    cout << "Feet: ";
    cin >> c2.feet;
    cout << "Inch: ";
    cin >> c2.inch;

    c3.add(c1, c2);
    c4 = c1.add(c2);

    cout << "Output A:" << endl;
    cout << "The sum is " << c3.feet << " Feet and " << c3.inch << " Inch" << endl;
    cout << "Output B:" << endl;
    cout << "The sum is " << c4.feet << " Feet and " << c4.inch << " Inch" << endl;

    return 0;
}