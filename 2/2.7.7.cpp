#include <iostream>
using namespace std;
void func(int hour, int min);

int main(void)
{
    int hour, min;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;
    func(hour, min);
    return 0;
}

void func(int hour, int min123)
{
    cout << "Time: " << hour << ":" << min123 << endl;
}