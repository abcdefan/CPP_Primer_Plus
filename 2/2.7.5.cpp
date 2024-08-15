#include <iostream>
using namespace std;
double convert(double num);

int main(void)
{
    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << convert(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

double convert(double celsius)
{
    return 1.8 * celsius + 32;
}