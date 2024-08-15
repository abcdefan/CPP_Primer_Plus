#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }
    cout << endl;
    return 0;
}