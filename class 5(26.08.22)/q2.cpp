#include <iostream>
using namespace std;

class Q2
{
public:
    static int count;
    int num;

    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
        count++;
    }
    void output()
    {
        cout << "number is: " << num << endl;
        count++;
    }
    void getCount()
    {
        cout << "Each function has been called " << count << " times" << endl;
    }
};

int Q2 ::count;

int main()
{

    Q2 obj;

    obj.input();
    obj.input();

    obj.output();
    obj.output();

    obj.getCount();
    return 0;
}