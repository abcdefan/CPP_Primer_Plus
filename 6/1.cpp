#include <iostream>

using namespace std;

int main(void)
{
    char ch;
    int total = 0, space = 0;
    cout << "Enter a char to the ch:";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            ++space;
        ++total;
        cin.get(ch);
    }
    cout << "the number of total chars is " << total << endl;
    cout << "the number of space is " << space << endl;
    return 0;
}
