#include <iostream>

using namespace std;

int main(void)
{
    cout << "This program my reformat your hard disk, and destory all your data." << endl;
    cout << "Do you wish to continue? <y/n>" << endl;
    char ch;
    do
    {
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            cout << "You were warned!" << endl;
        else if (ch == 'N' || ch == 'n')
            cout << "A wise choice ..." << endl;
        else
            cout << "That's wasn't a y or n, cannot follow your instruction, enter again:";
    } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');

    return 0;
}