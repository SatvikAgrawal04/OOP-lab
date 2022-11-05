#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(int);
    try
    {
        int a;
        cout << "Enter index you want to display: ";
        cin >> a;
        if (a < len - 1)
        {
            cout << arr[a];
        }
        else
        {
            throw a;
        }
    }
    catch (int a)
    {
        cout << "Index " << a << " is out of bounds";
    }

    return 0;
}