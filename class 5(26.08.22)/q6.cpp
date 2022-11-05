#include <iostream>
using namespace std;

class Q6
{
public:
    char c;
    int n;

    void print()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << '*' << endl;
        }
    }
};

void print(char a = '*', int n = 80)
{
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
    }
}

int main()
{
    Q6 obj;
    char c;
    // cout << "enter a char: ";
    // cin >> c;
    int n;
    // cout << "Enter no. of times: ";
    // cin >> n;

    print();
    // obj.print();

    return 0;
}