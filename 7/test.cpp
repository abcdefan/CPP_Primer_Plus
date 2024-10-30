#include <iostream>

using namespace std;

int main(void)
{
    int n = 10;
    int * p = n;
    int * q = &n;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "q = " << q << endl;
    cout << "*q = " << *q << endl;
    return 0;
}