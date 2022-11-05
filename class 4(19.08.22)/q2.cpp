#include <iostream>
using namespace std;

class Books
{
public:
    string name;
    string author;
    float price;

    void displayInRange(float a, float b)
    {
        if ((price > a) && (price < b))
        {
            cout << name << "\t" << author << "\t" << price << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the no. of books: ";
    cin >> n;

    Books book[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of book " << i + 1 << endl;

        cout << "Name :";
        cin >> book[i].name;

        cout << "Author: ";
        cin >> book[i].author;

        cout << "Price: ";
        cin >> book[i].price;
    }

    float min, max;
    cout << "Enter minimum and maximum:-" << endl;
    cin >> min >> max;

    cout << "NAME\tAUTHOR\tPRICE" << endl;
    for (int i = 0; i < n; i++)
    {
        book[i].displayInRange(min, max);
    }

    return 0;
}