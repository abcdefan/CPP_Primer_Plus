#include <iostream>
#include "namesp.h"

using namespace debts;

int main(void)
{
    Person p[3];
    Debt d[3];
    d[0].name.firstName = "zhang";
    d[0].name.lastName = "zf";
    d[0].amount = 1;
    for (int i = 1; i < 3; i++)
    {
        getDebt(d[i]);
        showDebt(d[i]);
    }
    std::cout << "The total debts are " << sumDebts(d, 3);
}