#include <iostream>

using namespace std;

int main(void)
{
    int rats = 101;
    int& rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    return 0;
}