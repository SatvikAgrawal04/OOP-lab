// WAP to convert given paisa to equivalent rupee and paisa

#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter value in paisa: " << endl;
    cin >> p;

    int rupee = p/100;
    int paisa = p % 100;

    cout << "Value is " << rupee << " rupees and " << paisa << " paisa";
    
    return 0;
}