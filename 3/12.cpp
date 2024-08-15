#include <iostream>

int main(void)
{
    using namespace std;

    const int Stone_per_pound = 14;

    cout << "Enter your weight in pounds: ";
    int pounds;
    cin >> pounds;
    int stones = pounds / Stone_per_pound;
    int left = pounds % Stone_per_pound; 

    cout << pounds << " pounds are " << stones << " stones and " << left << " pounds." << endl;
    return 0;
}