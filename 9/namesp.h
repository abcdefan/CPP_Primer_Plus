#ifndef __NAMESP_H__
#define __NAMESP_H__

#include <string>

namespace pers
{
    struct Person
    {
        std::string firstName;
        std::string lastName;
    };

    void getPerson(Person& p);
    void showPerson(const Person& p);
}

namespace debts
{
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt& d);
    void showDebt(const Debt& d);
    double sumDebts(const Debt arr[], int n);
}

#endif