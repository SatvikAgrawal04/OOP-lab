#include <iostream>
using namespace std;
template <typename T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << myMax(3, 4) << endl;
    cout << myMax(3.3, 4.2) << endl;
    cout << myMax('c', 'a') << endl;
    return 0;
}