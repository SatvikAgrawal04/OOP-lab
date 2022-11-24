#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a)
{
    return a + 5;
}

int main()
{
    string a = "12/10/22";
    string b = "14/11/22";
    int dd = stoi(a.substr(0, 2));
    int mm = stoi(a.substr(3, 5));
    int yy = stoi(a.substr(6, 8));
    return 0;
}