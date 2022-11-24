#include <iostream>
using namespace std;
template <class T>
class data
{
public:
    data(T a)
    {
        cout << sizeof(a);
    }
};

int main()
{
    data<char> h('a');
    data<int> h(5);
    data<float> h(4.2);
    return 0;
}