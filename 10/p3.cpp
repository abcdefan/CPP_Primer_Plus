#include <iostream>
#include "p3.h"
#include <cstring>

using namespace std;

Golf::Golf(const char* name, int hc)
{
    strncpy(fullname, name, Len - 1);
    handicap = hc;
}

void Golf::setgolf()
{
    cout << "Enter name to the fullname:";
    cin.getline(fullname, Len);
    if(strcmp(fullname, "") == 0)
        cout << "The name you entered is empty, so the project terminated!\n";
    cout << "Enter value to the handicap:";
    cin >> handicap;
    cin.get();
}

void Golf::sethandicap(int hc)
{
    handicap = hc;
}


void Golf::showgolf() const
{
    cout << "fullname = " << fullname << endl;
    cout << "handicap = " << handicap << endl;
}