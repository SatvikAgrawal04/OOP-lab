#include <iostream>
#include <exception>
using namespace std;
// class Composite_Exception : public exception
// {
// public:
//     const char *what()
//     {
//         return "Composite_Exception";
//     }
// };
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     try
//     {
//         Composite_Exception ce;
//         for (int i = 2; i < n; i++)
//             if (n % i == 0)
//                 throw ce;
//         cout << "Prime number\n";
//     }
//     catch (Composite_Exception e)
//     {
//         cout << e.what() << endl;
//     }
//     return 0;
// }

class NotPrime : public exception
{
public:
    const char *what()
    {
        return "Composite_Eception";
    }
};

int main()
{
    int n;
    cout << "Enter a prime number: ";
    cin >> n;
    try
    {
        NotPrime obj;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                throw obj;
            }
        }
        cout << n << endl;
    }
    catch (NotPrime obj)
    {
        cout << obj.what() << endl;
    }
}