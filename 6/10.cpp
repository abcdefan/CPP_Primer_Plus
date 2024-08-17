#include <iostream>

using namespace std;

void showmenu(void);
void report(void);
void comfort(void);

int main(void)
{
    showmenu();
    char choice;
    cin >> choice;
    while (choice != '5')
    {
        switch (choice)
        {
        case '1':
            cout << "Warning!!!\n";
            break;
        case '2':
            report();
            break;
        case '3':
            cout << "The boss are in all day.\n";
            break;
        case '4':
            comfort();
            break;
        default:
            cout << "That is not a choice." << endl;
        }
        cin >> choice;
    }

    return 0;
}

void showmenu(void)
{
    cout << "Please enter 1, 2, 3, 4, 5 as your choice:" << endl;
    cout << "1) alarm" << endl
         << "2) report" << endl
         << "3) alibi" << endl
         << "4) comfort" << endl
         << "5) quit" << endl;
}

void report(void)
{
    cout << "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort(void)
{
    cout << "You are the finest CEO\n";
}