#include <iostream>
#include "r5.h"

using namespace std;

Bank::Bank(std::string n, const std::string a, double b)
{
    name = n;
    account = a;
    balance = b;
}

void Bank::show() const
{
    cout << "name = " << name << endl;
    cout << "account = " << account << endl;
    cout << "balance = " << balance << endl;
}

void Bank::save(double money)
{
    balance += money;
    cout << "save successfully!\n";
}

void Bank::withdraw(double money)
{
    if (money <= 0)
        cout << "can not withdraw a negative or zero number!\n";
    else if (money > balance)
    {
        cout << "you current balance is " << balance << endl;
        cout << "you can not withdraw a number bigger than balance.\n";
    }
    else
    {
        balance -= money;
        cout << "withdraw successfully!\n";
    } 
}

Bank::~Bank(){}