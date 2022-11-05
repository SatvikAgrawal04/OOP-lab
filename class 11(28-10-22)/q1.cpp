// Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.
#include <iostream>
using namespace std;
class shape
{
public:
    float radius, base, side, height;
    virtual void area()
    {
    }
};
class Rectangle : public shape
{
public:
    void area()
    {
        cout << "Enter the side of square: " << endl;
        cin >> side;
        cout << "Area of square:" << side * side << endl;
    }
};
class Circle : public shape
{
    virtual void area()
    {
        cout << "Enter the radius of the circle " << endl;
        cin >> radius;
        cout << "Area of circle:" << (3.14 * radius * radius) << endl;
    }
};
class Triangle : public shape
{
    virtual void area()
    {
        cout << "Enter base and height of the triangle:" << endl;
        cin >> base >> height;
        cout << "Area of triangle:" << (0.5 * base * height) << endl;
    }
};
int main()
{
    shape *sptr;
    Rectangle ob1;
    sptr = &ob1;
    sptr->area();
    Circle ob2;
    sptr = &ob2;
    sptr->area();
    Triangle ob3;
    sptr = &ob3;
    sptr->area();
    return 0;
}