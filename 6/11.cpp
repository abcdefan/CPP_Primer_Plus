#include <iostream>

using namespace std;

enum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo
};

int main(void)
{
    int code;

    do
    {
        cout << "Enter color code (0~6):";
        cin >> code;
        switch (code)
        {
        case red:
            cout << "You choose red!\n";
            break;
        case orange:
            cout << "You choose orange!\n";
            break;
        case yellow:
            cout << "You choose yellow!\n";
            break;
        case green:
            cout << "You choose green!\n";
            break;
        case blue:
            cout << "You choose blue!\n";
            break;
        case violet:
            cout << "You choose violet!\n";
            break;
        case indigo:
            cout << "You choose indigo!\n";
            break;
        }
    } while (code >= red && code <= indigo);

    cout << "Bye!" << endl;

    return 0;
}