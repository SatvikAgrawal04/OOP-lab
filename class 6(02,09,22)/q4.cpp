#include <iostream>
#include <string.h>
using namespace std;
class Q4
{
    string s;
    int l;

public:
    Q4()
    {
        cout << "Default constructor invoked" << endl
             << "enter a steing: ";
        cin >> s;
        l = s.length();
    }
    Q4(string str)
    {
        cout << "Parameterized constructor invoked" << endl;
        s = str;
        l = s.length();
    }
    Q4(Q4 &obj)
    {
        cout << "copy constructor invoked" << endl;
        s = obj.s;
        l = obj.l;
    }
    void disp()
    {
        cout << s << ":" << l << endl;
    }
    string conc(Q4 obj1, Q4 obj2)
    {
        return obj1.s + obj2.s;
    }
};

int main()
{
    Q4 obj1;
    cout << "enter string: ";
    string str;
    cin >> str;
    Q4 obj2(str);
    Q4 obj3 = obj2;
    obj1.disp();
    obj2.disp();
    obj3.disp();
    cout << obj3.conc(obj1, obj2);

    return 0;
}
