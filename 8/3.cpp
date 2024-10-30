#include <iostream>

using namespace std;

int main(void)
{
    int rats = 101;
    int &rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;

    int bunnies = 50;
    rodents = bunnies;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    cout << "bunnies = " << bunnies << endl;

    cout << "bunnies address = " << &bunnies << endl;
    cout << "rodents address = " << &rodents << endl;
    cout << "rats address = " << &rats << endl;

    return 0;
}