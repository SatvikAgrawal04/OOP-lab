#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int a, int b)
    {
        feet = a;
        inch = b;
    }
    void show()
    {
        cout << feet << endl
             << inch << endl;
    }
    friend Distance operator-(Distance A)
    {
        Distance B;
        B.feet = -1 * A.feet;
        B.inch = -1 * A.inch;
        return B;
    }
    friend Distance operator+(int a, Distance A)
    {
        Distance B;
        B.feet = a + A.feet;
        B.inch = a + A.inch;
        return B;
    }
    friend Distance operator+(Distance A, Distance C)
    {
        Distance B;
        B.feet = C.feet + A.feet;
        B.inch = C.inch + A.inch;
        return B;
    }
};

int main()
{
    Distance A(4, 5);
    Distance B;
    Distance C(8, 9);
    B = 4 + A;
    B.show();
    B = A + C;
    B.show();
    B = -B;
    B.show();
    return 0;
}