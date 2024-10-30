#include <iostream>

using namespace std;

double harmean(double x, double y);

int main(void)
{
    cout << "Please enter two numbers, until one of them is zero:";
    double a, b;
    while (cin >> a >> b && a != 0 && b != 0)
        cout << harmean(a, b) << endl;
    return 0;
}

double harmean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}