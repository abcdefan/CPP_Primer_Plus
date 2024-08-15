#include <iostream>

using namespace std;

int main(void)
{
    string name;
    cout << "Enter your first name:";
    cin >> name;

    cout << "Here is your name: " << endl;

    int i = 0;

    while (name[i])
        cout << name[i++];
    cout << endl;
    return 0;
}