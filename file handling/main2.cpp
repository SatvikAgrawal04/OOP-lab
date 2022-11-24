// WAP to copy from one file to another

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("text");
    ofstream out("text2");
    string n;
    while (getline(in, n))
    {
        out << n << endl;
    }

    /*
    Another way using eof(end of file) function
    while(!int.eof())
    {
        string text;
        getline(in, text);
        out << text << endl;
    }
    */
    return 0;
}