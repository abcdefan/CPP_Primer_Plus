#include <iostream>

using namespace std;

double add(double x, double y);
double sub(double x, double y);
double calculate(double a, double b, double (*func)(double x, double y));

int main(void)
{ 
    double a, b;
    while ((cin >> a >> b) && cin)
    {
        cout << a << " + " << b << " = " <<  calculate(a, b, add) << endl;
        cout << a << " - " << b << " = " <<calculate(a, b, sub) << endl;;
    }
    return 0;   
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double calculate(double a, double b, double (*func)(double x, double y))
{
    double ans = (*func)(a, b);
    return ans;
}