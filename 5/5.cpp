#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    for (int i = 0; i < 100; i += by)
        cout << i << endl;
    return 0;
}