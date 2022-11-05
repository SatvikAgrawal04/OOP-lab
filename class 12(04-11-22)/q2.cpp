#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;
        cout << "Enter divident and divisor:" << endl;
        cin >> a >> b;
        if (b == 0)
        {
            throw b;
        }
        else
        {
            cout << "Quotient is: " << a / b;
        }
    }
    catch (int a)
    {
        cout << "Divisor cannot be " << a;
    }

    return 0;
}