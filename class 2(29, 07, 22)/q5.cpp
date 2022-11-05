// WAP to find avg mark of 5 subjects of a student and find the percentage. (assume full marks is 100)

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e;
    cout << "enter marks of 5 subjects: " << endl;
    cin >> a >> b >> c >> d >> e;
    // float avg = (a+b+c+d+e)/5;
    float percent = ((a + b + c + d + e) / 500.0) * 100.0;
    cout << "percentage is: " << percent << "%" << endl;

    return 0;
}