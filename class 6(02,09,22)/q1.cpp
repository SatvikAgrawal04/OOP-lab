#include <iostream>
using namespace std;
class C2;
class C1
{
    int num1;
    friend void swap(C1 *num1, C2 *num2);

public:
    C1(int value)
    {
        num1 = value;
    }
    void printValue()
    {
        cout << num1 << endl;
    }
};
class C2
{
    int num2;
    friend void swap(C1 *num1, C2 *num2);

public:
    C2(int value)
    {
        num2 = value;
    }
    void printValue()
    {
        cout << num2 << endl;
    }
};
void swap(C1 *obj1, C2 *obj2)
{
    int temp = obj1->num1;
    obj1->num1 = obj2->num2;
    obj2->num2 = temp;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter values of members of 1st and 2nd class: " << endl;
    cin >> a >> b;
    C1 x(a);
    C2 y(b);
    swap(&x, &y);
    cout << "After swapping" << endl;
    x.printValue();
    y.printValue();
    return 0;
}