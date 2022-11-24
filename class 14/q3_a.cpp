#include <iostream>
using namespace std;
template <typename T>
void sort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                T tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    int a[] = {2, 1, 5, 3, 6, 4};
    float b[] = {2.2, 1.5, 5.1, 3.6, 6.2, 4.3};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    sort<int>(a, n1);
    sort<float>(b, n2);
    for (int i = 0; i < n2; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}