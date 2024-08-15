#include <iostream>
#include <cstring>

using namespace std;

char* getname(void)
{
    char tmp[80];
    cout << "Enter last name: ";
    cin.getline(tmp, 80);
    char *pn = new char [strlen(tmp) + 1];
    strcpy(pn, tmp);
    return pn;
}

int main(void)
{
    char *name = getname();
    cout << "name = " << name << " and name store at " << (int *) name << endl;
    delete []name;
    return 0;
}