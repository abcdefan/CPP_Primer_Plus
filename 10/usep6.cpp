#include <iostream>
#include "p6.h"

int main(void)
{
    Move a = Move();
    // a.showmove();
    a.reset(10.1, 10.2);
    a.showmove();
    Move b(1.1, 2.2);
    Move c = a.add(b);
    c.showmove();
    c.reset(0.1, 0.001);
    c.showmove();
    return 0;
}