#include <iostream>

using namespace std;

const int Max = 5;

int main(void)
{
    double fish[Max];
    cout << "Enter the weight of your fishs:\n";
    cout << "You can enter up to " << Max << " , and you can enter q to terminate.\n";

    int i = 0;
    cout << "Enter the weight of fish #1: ";
    while (i < Max && cin >> fish[i])
    {
        ++i;
        if (i < Max)
            cout << "Enter the weight of fish #" << i + 1 << ": ";
    }

    double total = 0;
    for (int j = 0; j < i; j++)
        total += fish[j];

    if (total == 0)
        cout << "No fish\n";
    else
        cout << "Average weight of " << i << " fish is " << total / i << ".\n";

    return 0;
}