#include <iostream>
// #include <exception>
// #include <string>
using namespace std;
// class Blank_Character_Exception : public exception
// {
// public:
//     const char *what()
//     {
//         return "Blank_Character_Exception";
//     }
// };

int main()
{
    //     char ch;
    //     cout << "Enter an UPPERCASE character: ";
    //     cin >> ch;
    //     try
    //     {
    //         Blank_Character_Exception bc;
    //         if (isalpha(ch))
    //         {
    //             ch -= (ch >= 97 && ch <= 122) ? 32 : 0;
    //             cout << ch << endl;
    //         }
    //         else
    //         {
    //             cout << "Inserted character \"" << ch << "\" is not an alphabet\n";
    //             throw bc;
    //         }
    //     }
    //     catch (Blank_Character_Exception b)
    //     {
    //         cout << b.what() << endl;
    //     }

    char c;
    cout << "Enter a char: ";
    cin >> c;

    try
    {
        if (!isalpha(c))
        {
            throw(c);
        }
        else if (c >= 65 && c <= 90)
        {
            c = c + 32;
            cout << c;
        }
        else
        {
            cout << c;
        }
    }
    catch (char c)
    {
        cout << "Blank Character Exception" << endl;
    }

    return 0;
}