// 3. WAP to demonstrate the order of execution of constructor and destructor for a class.

#include <iostream>
using namespace std;

class Q3
{
    int x;

public:
    Q3()
    {
        cout << "Constructor invoked" << endl;
    }
    ~Q3()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    Q3 obj1;
    Q3 obj2;
    return 0;
}
