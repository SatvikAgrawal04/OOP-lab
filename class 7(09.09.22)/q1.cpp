// 1. WAP that uses dynamic constructor to allocate memory to an array of integer. count the no. of even and odd elements present in this array.

#include <iostream>
using namespace std;
class Dynamic
{
    int *ptr;
    int len;

public:
    Dynamic(int n)
    {
        ptr = new int(n);
        len = n;
        for (int i = 0; i < len; i++)
            cin >> ptr[i];
    }
    ~Dynamic()
    {
        delete ptr;
    }
    void count()
    {
        int o = 0, e = 0;
        for (int i = 0; i < len; i++)
        {
            if (ptr[i] % 2 == 0)
                e++;
            else
                o++;
        }
        cout << "odd no: " << o << " Even no: " << e << endl;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    Dynamic arr(n);
    arr.count();
    return 0;
}