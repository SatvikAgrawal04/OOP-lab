#include <iostream>
using namespace std;

class Values
{
public:
    int a;
    int b;
    void swap()
    {
        int temp;
        temp = a;
        a = b;
        b = temp;

        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    Values val;
    cout << "Enter values a and b" << endl;
    cin >> val.a >> val.b;
    cout << "Before swapping " << endl;
    cout << "a = " << val.a << " b = " << val.b << endl;
    cout << "After swapping " << endl;
    val.swap();

    return 0;
}