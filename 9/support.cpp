#include <iostream>
#include "support.h"

using namespace std;

extern double warming;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local(void)
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "Global warming = " << ::warming << " degrees.\n";
}

