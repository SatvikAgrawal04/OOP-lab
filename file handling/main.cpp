#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("text");
    out << "input" << endl;
    out << "bleh" << endl;
    return 0;
}