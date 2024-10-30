#include <iostream>

using namespace std;

inline double square(double x)
{
    return x * x;
}

int main(void)
{
    cout << square(1) << endl;
    cout << square(2) << endl;
    cout << square(3) << endl;
    cout << square(4) << endl;
    cout << square(5) << endl;
    return 0;
}