#include <iostream>
#include <math.h>
using namespace std;

class coordinate
{

public:
    static float dis;
    int x, y;

    void distance(coordinate c1, coordinate c2)
    {
        dis = sqrt(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2));
    }
};

float coordinate ::dis;
int main()
{
    coordinate c1, c2;

    cout << "Enter 1st coordinate x and y" << endl;
    cin >> c1.x >> c1.y;

    cout << "Enter 2nd coordinate x and y" << endl;
    cin >> c2.x >> c2.y;

    c1.distance(c1, c2);

    cout << "The distance between the coordinates is: " << coordinate::dis << endl;

    return 0;
}