#include <iostream>
using namespace std;

int main(void)
{
    double d = 100, c = 100;
    int x = 0;
    do
    {
        d += 100 * 0.1;
        c += c * 0.05;
        x++;
    } while (d >= c);
    cout << x << " years pass, Cleo has $" << c << " and Daphne has $" << d << endl;
    return 0;
}