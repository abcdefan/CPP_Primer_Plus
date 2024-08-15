#include <iostream>

using namespace std;

const int Max = 5;

int main(void)
{
    double scores[Max];
    int i = 0;
    double total = 0;

    while (i < Max)
    {
        cout << "Enter the score #" << i + 1 << ":";
        while (!(cin >> scores[i]))
        {
            cout << "Invalid score, plz enter again to the score #" << i + 1 << ":";
            cin.clear();
            while (cin.get() != '\n')
                ;
        }
        total += scores[i];
        ++i;
    }

    cout << "The average score is " << total / i << endl;
    return 0;
}