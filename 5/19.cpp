#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    int count = 0;

    cout << "Enter chars, enter # to quit:" << endl;
    cin >> ch;
    while (cin.fail() == false)
    {
        ++count;
        cout << ch;
        cin >> ch;
    };

    cout << endl
         << count - 1 << " chars have been read.\n";
    return 0;
}