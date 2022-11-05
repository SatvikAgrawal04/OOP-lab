#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;
    int sec;

public:
    Time()
    {
        hr = min = sec = 0;
    }
    Time(int a, int b, int c)
    {
        hr = a;
        min = b;
        sec = c;
    }
    void show()
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }
    Time operator=(Time A)
    {
        hr = A.hr;
        min = A.min;
        sec = A.sec;
    }
};

int main()
{
    Time A(4, 8, 30);
    Time B;
    B = A;
    B.show();
    return 0;
}