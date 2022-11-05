#include <iostream>
using namespace std;
float SI(float P, int T, float R = 0.05)
{
    return P * R * T;
}
int main()
{
    float p;
    int t;
    cout << "Enter Principle amount (in INR): ";
    cin >> p;
    cout << "Enter time in years: ";
    cin >> t;
    cout << "Simple Interest (in INR) = " << SI(p, t) << "\nAmount (in INR) = " << p + SI(p, t) << endl;
    return 0;
}