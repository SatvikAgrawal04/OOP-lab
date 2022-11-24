#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("CSE-40");
    out << "CONTENT" << endl;
    return 0;
}