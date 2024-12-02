#include <iostream>
#include "p2.h"
#include <cstring>

using namespace std;

Person::Person(const string& n, const char* fn)
{
    lname = n;
    strncpy(fname, fn, LIMIT - 1); // 既然把LIMIT定义为静态变量肯定是有原因的，这里要用到
}

void Person::Show() const
{
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    cout << lname << " " << fname << endl;
}