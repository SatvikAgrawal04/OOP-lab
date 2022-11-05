// WAP to convert given second into its hour minute and second

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter no. of seconds: " << endl;
    cin >> a;

    int hr = a/3600;
    int min = a/60;
    min = min % 60;
    int sec = a%60;

    cout << hr << " hrs, " << min << " minutes and " << sec << " seconds"; 
    
    return 0;
}