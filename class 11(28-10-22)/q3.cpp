#include <iostream>
using namespace std;

class Account
{
protected:
    int no;
    string name;
    float bal;

public:
    void getData()
    {
        cout << "Enter Account No.: ";
        cin >> no;
        cout << "Enter name:";
        cin >> name;
        cout << "Enter Deposit Amount: ";
        cin >> bal;
    }
    float putData()
    {
        cout << "Account No.: " << no << endl;
        cout << "Name: " << name << endl;
        cout << "Enter withdraw amount: ";
    }
};

class Savings : public Account
{
    float min;

public:
    virtual void getData()
    {
        Account::getData();
        cout << "Enter minimum balance: ";
        cin >> min;
    }
    virtual void putData()
    {
        Account::putData();
        float amt;
        cin >> amt;
        if (amt < (bal - min))
        {
            cout << amt << " has been withdrawn" << endl;
            bal -= amt;
            cout << "Remaining balance is " << bal << endl;
        }
        else
        {
            cout << "Not Enough balance" << endl;
        }
    }
};

class Current : public Account
{
    float overDue;

public:
    virtual void getData()
    {
        Account::getData();
        cout << "Enter Over-Due: ";
        cin >> overDue;
    }
    virtual void putData()
    {
        Account::putData();
        int amt;
        cin >> amt;
        if (amt > bal)
        {
            if (amt > bal + overDue)
            {
                cout << "Not enough balance" << endl;
            }
            else
            {
                cout << amt << " has been withdrawn. " << amt - bal << " over-due" << endl;
            }
        }
        else
        {
            cout << amt << " has been withdrawn " << endl
                 << bal - amt << " remaining." << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    cout << "SAVINGS" << endl;
    Savings Acc1;
    Acc1.getData();
    Acc1.putData();
    cout << "\nCURRENT" << endl;
    Current Acc2;
    Acc2.getData();
    Acc2.putData();
    return 0;
}
