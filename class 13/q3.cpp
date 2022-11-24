#include <iostream>
#include <exception>
using namespace std;
// class Odd_Exception : public exception
// {
// public:
//     const char *what()
//     {
//         return "Odd_Exception";
//     }
// };
// int main()
// {
//     int a[5];
//     cout << "Enter 5 even numbers: ";
//     try
//     {
//         Odd_Exception oe;
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> a[i];
//             if (a[i] % 2 != 0)
//                 throw oe;
//         }
//         cout << "Entered numbers: ";
//         for (int i = 0; i < 5; i++)
//             cout << a[i] << "\t";
//         cout << endl;
//     }
//     catch (Odd_Exception o)
//     {
//         cout << o.what() << endl;
//     }
//     return 0;
// }

class OddException : public exception
{
public:
    const char *what()
    {
        return "Odd Number Entered";
    }
};

int main()
{
    int a[5];
    cout << "Enter 5 Even numbers:" << endl;
    try
    {
        OddException obj;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                throw obj;
            }
        }
    }
    catch (OddException obj)
    {
        cout << obj.what() << endl;
    }
}