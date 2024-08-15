#include <iostream>

int main(void)
{
    using namespace std;

    int updates = 6;
    int *p_updates;
    p_updates = &updates;

    cout << "updates = " << updates << endl;
    cout << "&updates = " << &updates << endl;
    cout << "p_updates = " << p_updates << endl;
    cout << "*p_updates = " << *p_updates << endl;
    *p_updates += 1;
    cout << "p_updates = " << p_updates << endl;
    cout << "updates = " << updates << endl;
    return 0;
}