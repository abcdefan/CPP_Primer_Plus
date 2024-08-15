#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    int count = 0;

    cout << "Enter chars, enter # to quit:" << endl;
    do
    {
        cin >> ch;
        ++count;
        cout << ch;
    } while (ch != '#');

    cout << endl
         << count - 1 << " chars have been read.\n";
    return 0;
}