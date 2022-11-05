#include <iostream>
using namespace std;

class Q3
{
    static int count;
    int x;

public:
    Q3()
    {
        count++;
    }
    static void objCount();
};

void Q3 ::objCount()
{
    cout << "No. of objects is: " << count << endl;
}

int Q3 ::count;

int main()
{
    Q3 obj1, obj2, obj3, obj4;
    Q3 ::objCount();

    return 0;
}