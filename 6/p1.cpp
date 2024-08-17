#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    char ch;
    cout << "Enter a char:";
    do
    {
        cin.get(ch);
        if (isdigit(ch))
        {
            cin.get(ch);
            continue;
        }
        if (!isdigit(ch) && ch != '@')
        {
            if (isalpha(ch) && islower(ch))
                cout << char(ch + 'A' - 'a');
            else if (isalpha(ch) && isupper(ch))
                cout << char(ch + 'a' - 'A');
            else
                cout << ch;
        }
    } while (ch != '@');

    return 0;
}