#include <iostream>

using namespace std;

void equal(int& x);

int main(void)
{
    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << endl;   
    cout << "The address of texas is " << &texas << endl;
    equal(texas);
    cout << "In main(), texas = " << texas << endl;   
    cout << "The address of texas is " << &texas << endl;
    return 0;
}

void equal(int& x)
{
    int texas = 0;
    x = texas;
    cout << "In equal(int x), texas = " << texas << endl;   
    cout << "The address of texas is " << &texas << endl;
    cout << "The address of x is " << &x << endl;
}