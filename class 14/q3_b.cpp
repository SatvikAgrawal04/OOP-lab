#include <iostream>
using namespace std;
template <class T>

class sort
{
public:
    sort(T a[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    T tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
};
int main()
{
    int a[] = {2, 1, 5, 3, 6, 4};
    float b[] = {2.2, 1.1, 5.4, 3.5, 6.3, 4.2};
    char c[] = {'a', 'c', 'b', 'e', 'd', 'f'};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    int n3 = sizeof(c) / sizeof(c[0]);
    sort<int> A1(a, n1);
    printf("\n");
    sort<float> A2(b, n2);
    printf("\n");
    sort<char> A3(c, n3);
    return 0;
}