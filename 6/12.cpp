#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
    char ch;
    cout << "Enter a char to the ch:";
    int space = 0;
    int total = 0;
    string ans;
    do
    {
        cin.get(ch);
        if (ch == '.')
            break;
        else
        {
            ans += ch;
            ++total;
            if (!isspace(ch))
                continue;
            ++space;
        }
    } while (ch != '.');

    cout << "there are " << space << " spaces.\n";
    cout << "there are " << total << " chars.\n";
    cout << ans << endl;
    return 0;
}