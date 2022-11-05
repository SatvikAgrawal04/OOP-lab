// Create a class Complex which stores real and imaginary part of a complex number. Input 10 complex numbers and display them.

#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;
};

int main()
{
    complex c1[10];
    cout << "Enter real part and imaginary part for 10 complex numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> c1[i].real >> c1[i].img;
    }

    cout << "The complex numbers are" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << c1[i].real << " + " << c1[i].img << "i" << endl;
    }

    return 0;
}