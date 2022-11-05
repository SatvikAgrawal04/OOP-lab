#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

public:
    virtual void getData() = 0;
    virtual void putData() = 0;
};
class Derived : public Base
{
public:
    void getData()
    {
        cin >> a;
    }
    void putData()
    {
        cout << a;
    }
};
int main()
{
    Derived A;
    A.getData();
    A.putData();
    return 0;
}