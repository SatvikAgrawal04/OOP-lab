#include <iostream>
#include <exception>
using namespace std;

class Expired : public exception
{
public:
    const char *what()
    {
        return "Product Expired";
    }
};
class Product
{
    int id, price, exp;
    string name;

public:
    Product()
    {
        id = 0;
        price = 0;
        exp = 0;
        name = "abc";
    }
    Product(int a, int b, int c, string d)
    {
        id = a;
        price = b;
        exp = c;
        name = d;
    }
    void display()
    {
        cout << "Product details" << endl
             << "Name: " << name << endl
             << "PID: " << id << endl
             << "Price: " << price << endl
             << "Expiry Date: " << exp << endl;
    }
    friend Product operator>(Product A, Product B)
    {
        Product C;
        A.price > B.price ? C = A : C = B;
        return C;
    }
};
int main()
{
    int curr;
    cout << "Enter current date(yyyymmdd): ";
    cin >> curr;
    int id1, id2, pr1, pr2, ex1, ex2;
    string nm1, nm2;
    cout << "Enter product details: " << endl;
    cout << "Enter expiry date1(yyyymmdd): ";
    cin >> ex1;
    cout << "Enter expiry date2(yyyymmdd): ";
    cin >> ex2;
    try
    {
        Expired obj;
        if (ex1 < curr || ex2 < curr)
            throw obj;
        cout << "Name1: ";
        cin >> nm1;
        cout << "Name2: ";
        cin >> nm1;
        cout << "id1: ";
        cin >> id1;
        cout << "id2: ";
        cin >> id2;
        cout << "price1: ";
        cin >> pr1;
        cout << "price2: ";
        cin >> pr2;
        Product p1(id1, pr1, ex1, nm1);
        Product p2(id2, pr2, ex2, nm2);
        Product p3 = p1 > p2;
        p3.display();
    }
    catch (Expired obj)
    {
        cout << obj.what() << endl;
    }
    return 0;
}