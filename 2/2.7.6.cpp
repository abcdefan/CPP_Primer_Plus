#include <iostream>
using namespace std;
double convert(double lightYears);

int main(void)
{
    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years = " << convert(lightYears) << " astronomical units." << endl;
    return 0;
}

double convert(double lightYears)
{
    return lightYears * 63240;
}