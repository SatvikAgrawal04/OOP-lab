// WAP to perform addition, subtraction and multiplication of 2 integers and display the result

#include <iostream>
using namespace std;

int main()
{
    int s, d, p;
    int a, b;
    cout << "Enter numbers" << endl;
    cin >> a >> b;

    s = a + b;
    d = a - b;
    p = a * b;

    cout << "sum is " << s << endl;
    cout << "difference is " << d << endl;
    cout << "product is " << p << endl;

    return 0;
}
