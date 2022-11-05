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
        cout << "int type expression caught" << endl;
    }
    catch (char a)
    {
        cout << "char type expression caught" << endl;
    }
    catch (...)
    {
        cout << "invalid divisor";
    }

    return 0;
}