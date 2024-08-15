#include <iostream>
using namespace std;

const int Fave = 27;

int main(void)
{
    int num;
    cout << "Enter a num in the range 1-100:";
    do
    {
        cin >> num;
        if (num > Fave)
            cout << "Too high, guess again:";
        else if (num < Fave)
            cout << "To low, guess again:";
        else
            cout << num << " is the right number" << endl;
    } while (num != Fave);
    return 0;
}