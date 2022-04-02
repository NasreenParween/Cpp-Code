#include <iostream>
using namespace std;

class Bank
{
public:
    int getBalance()
    {
        return 0;
    }
};

class BankA : public Bank
{
    int amount;
public:
    BankA(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

class BankB : public Bank
{
    int amount;
public:
    BankB(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

class BankC : public Bank
{
    int amount;
public:
    BankC(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

int main()
{
    BankA a(1000);
    BankB b(1500);
    BankC c(2000);
    cout << a.getBalance() << endl;
    cout << b.getBalance() << endl;
    cout << c.getBalance() << endl;
    return 0;
}
