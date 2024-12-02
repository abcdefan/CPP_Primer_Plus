#include <iostream>
#include "p6.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
}

Move Move::add(const Move& m) const
{
    Move nm = Move();
    nm.x = this->x + m.x;
    nm.y = this->y + m.y;
    return nm;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}