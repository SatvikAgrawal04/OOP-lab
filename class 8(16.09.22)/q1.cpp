#include <iostream>
using namespace std;

class Q1
{
    int a;
};

class Q1_single : public Q1
{
public:
    Q1_single()
    {
        cout << "single level inheritance" << endl;
    }
};

class Q1_multi : public Q1_single
{
public:
    Q1_multi()
    {
        cout << "multi level inheritance" << endl;
    }
};
class Q1_multiple : virtual public Q1_single, virtual public Q1_multi
{
public:
    Q1_multiple()
    {
        cout << "multiple inheritance" << endl;
    }
};
class Q1_hereditary : virtual public Q1
{
public:
    Q1_hereditary()
    {
        cout << "hereditary inheritance with Q1 and Q1_single" << endl;
    }
};
class Q1_hybrid : public Q1_single, public Q1_hereditary
{
public:
    Q1_hybrid()
    {
        cout << "hybrid inheritance with Q1_single and Q1_hereditary" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Q1 obj1;
    cout << endl;
    Q1_single obj2;
    cout << endl;

    Q1_multi obj3;
    cout << endl;

    Q1_multiple obj4;
    cout << endl;

    Q1_hereditary obj5;
    cout << endl;

    Q1_hybrid obj6;
    cout << endl;

    return 0;
}
