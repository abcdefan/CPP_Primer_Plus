#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3;

int main(void)
{
    cout << "Global warning is " << warming << " degrees.\n";
    update(0.3);
    local();
    return 0;
}