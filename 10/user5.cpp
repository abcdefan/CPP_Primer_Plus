#include <iostream>
#include "r5.h"

using namespace std;

int main()
{
    Bank bank = Bank("Rick", "788460");
    bank.show();
    bank.save(100);
    bank.show();
    bank.withdraw(200);
    bank.withdraw(20);
    bank.show();
    return 0;
}