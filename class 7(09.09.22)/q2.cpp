// 2. create a class which stores x and y coordinates of a point write a function to find distance between 2 points, initialize the objects using parameterized constructor with default arguments and copy constructor.

#include <iostream>
#include <cmath>
using namespace std;

class Coordinate
{
    int x;
    int y;

public:
    Coordinate(int a, int b = 0)
    {
        x = a;
        y = b;
    }
    Coordinate(Coordinate &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void dis(Coordinate obj)
    {
        int dis;
        dis = sqrt(pow((x - obj.x), 2) + pow((y - obj.y), 2));
        cout << "distance is: " << dis << endl;
    }
};

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter coordinate x and y for 1st point: ";
    cin >> a >> b;
    Coordinate A(a, b);
    cout << "Enter coordinate x for 2nd point (y will be 0): ";
    cin >> a;
    Coordinate B(a);
    Coordinate C(B);
    A.dis(C);
    return 0;
}
