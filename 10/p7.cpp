#include <iostream>
#include "p7.h"
#include <cstring>

Plorg::Plorg(std::string s)
{
    strncpy(fullname, s.c_str(), Max - 1);
    fullname[Max - 1] = '\0';   
    CI = 50;
}

void Plorg::alterCI(int c)
{
    CI = c;
}

void Plorg::show() const
{
    std::cout << "fullname = " << fullname << std::endl;
    std::cout << "CI = " << CI << std::endl;
}