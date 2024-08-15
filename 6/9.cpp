#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cout << "Enter two integers:";
    cin >> a >> b;

    int c = a > b ? a : b;
    cout << "The larger number between a and b is " << c << endl;

    return 0;
}