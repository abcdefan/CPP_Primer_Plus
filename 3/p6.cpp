#include <iostream>

int main(void)
{
    using namespace std;

    double mile, gallon;
    cout << "Enter the car drives how many miles and uses how many gallons: ";
    cin >> mile >> gallon; 
    cout << "This car uses " << mile / gallon << " miles/gallon.\n";
    double km, L;
    cout << "Enter the car drives how many km and uses how many L: ";
    cin >> km >> L;
    cout << "This car uses " << (L / km) * 100 << "L/100km.\n";

    return 0;
}