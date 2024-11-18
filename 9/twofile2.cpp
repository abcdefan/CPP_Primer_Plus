#include <iostream>

using namespace std;

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(void)
{
    cout << "remote_access() reports the following address:\n";
    cout << "&tom = " << &tom << endl;
    cout << "&dick = " << &dick << endl;
    cout << "&harry = " << &harry << endl;
}
