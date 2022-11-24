#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        img = b;
    }
    Complex operator+(Complex A)
    {
        Complex B;
        B.real = real + A.real;
        B.img = img + A.img;
        return B;
    }
    Complex operator++()
    {
        real = ++real;
        img = ++img;
    }

    Complex operator++(int)
    {
        Complex tmp;
        tmp.real = real++;
        tmp.img = img++;
        return tmp;
    }
    void show()
    {
        cout << real << "+" << img << "i" << endl;
    }
};
int main()
{
    Complex A(2, 4);
    Complex B(5, 6);
    Complex C;
    C = A + B;
    cout << "C = A+B" << endl;
    C.show();
    ++C;
    cout << "++C" << endl;
    C.show();
    C = C++;
    cout << "C++" << endl;
    C.show();
    C = C++;
    C.show();
    return 0;
}