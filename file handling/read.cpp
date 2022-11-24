#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string n;
    ifstream in("text2");
    while (getline(in, n))
    {
        cout << n << endl;
    }
    in.close();
    return 0;
}