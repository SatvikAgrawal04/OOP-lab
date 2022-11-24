#include <iostream>
#include <exception>
using namespace std;
// class Mark_Exception : public exception
// {
// public:
//     const char *what()
//     {
//         return "Entered Marks Out_of_Range_Exception";
//     }
// };
// int main()
// {
//     int m;
//     cout << "Please enter marks (Min=0, Max=100): ";
//     cin >> m;
//     try
//     {
//         Mark_Exception me;
//         if (m < 0 || m > 100)
//             throw me;
//         cout << m << endl;
//     }
//     catch (Mark_Exception m)
//     {
//         cout << m.what() << endl;
//     }
//     return 0;
// }

class MarkException : public exception
{
public:
    const char *what()
    {
        return "Marks out of range";
    }
};

int main()
{
    int m;
    cout << "Enter marks: ";
    cin >> m;
    try
    {
        MarkException obj;
        if (m < 0 || m > 100)
        {
            throw obj;
        }
        cout << "Marks are: " << m << endl;
    }
    catch (MarkException obj)
    {
        cout << obj.what() << endl;
    }
    return 0;
}
