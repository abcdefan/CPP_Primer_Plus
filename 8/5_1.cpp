#include <iostream>

using namespace std;

double cube(double x);
double refcube(const double& x);

int main(void)
{
    double x = 3.0;
    cout << cube(x) << " = cube of " << x << endl;
    cout << refcube(5.0) << " = cube of " << 5.0 << endl;
    
    return 0;
}

double cube(double x)
{
    return x *= x * x;
}

double refcube(const double& x)
{
    return x * x * x;
}