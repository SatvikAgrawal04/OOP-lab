#include <iostream>
using namespace std;

void increment(int& num)
{
    num = num + 1;
}

int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    int& a1 = a;
    increment(a1);

    cout << "Value of a after increment is " << a;
    return 0;
}