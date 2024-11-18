#include <iostream>
#include "namesp.h"

using namespace std;

namespace pers
{    
    void getPerson(Person& p)
    {
        cout << "Enter first name: ";
        cin >> p.firstName;
        cout << "Enter last name: ";
        cin >> p.lastName;
    }
    
    void showPerson(const Person& p)
    {
        cout << p.firstName << " " << p.lastName;
    }
}

namespace debts
{
    void getDebt(Debt& d)
    {
        getPerson(d.name);
        cout << "Enter debt: ";
        cin >> d.amount;
    }

    void showDebt(const Debt& d)
    {
        showPerson(d.name);
        cout << "'s debts are " << d.amount << endl;
    }

    double sumDebts(const Debt arr[], int n)
    {
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i].amount;
        return sum;
    }
}