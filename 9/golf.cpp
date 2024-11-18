#include <iostream>
#include "golf.h"

using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g)
{
    cout << "Enter name to the fullname:";
    cin.getline(g.fullname, Len);
    if(strcmp(g.fullname, "") == 0)
    {
        cout << "The name you entered is empty, so the project terminated!\n";
        return 0;
    }
    cout << "Enter value to the handicap:";
    cin >> g.handicap;
    cin.get();
    return 1;
}


void handicap(golf& g, int hc)
{
    g.handicap = hc;
}


void showgolf(const golf& g)
{
    cout << "fullname = " << g.fullname << endl;
    cout << "handicap = " << g.handicap << endl;
}