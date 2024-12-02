#include <iostream>
#include "p7.h"

int main(void)
{
    Plorg p1{};
    Plorg p2{"tb"};
    p1.alterCI(20);
    p1.show();
    p2.show();
    return 0;
}