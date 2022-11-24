#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("CSE-40");
    string n;
    while (getline(in, n))
    {
        cout << n << endl;
    }
    getchar();
    return 0;
}