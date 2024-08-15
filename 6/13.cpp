#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2;
    cout << "Enter first number:";
    cin >> num1;

    cin.clear(); // reset input
    while (cin.get() != '\n')
        ;

    cout << "Enter second number:";
    cin >> num2;

    cout << num1 << endl
         << num2 << endl;

    return 0;
}