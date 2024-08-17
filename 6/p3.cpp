#include <iostream>

using namespace std;

void showmenu(void);

int main(void)
{
    showmenu();
    char choice;
    cin >> choice;
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cout << "Please enter a c, p, t, or g:";
        cin >> choice;
    }

    switch (choice)
    {
    case 'c':
        break;
    case 'p':
        break;
    case 't':
        cout << "A maple is a tree\n";
        break;
    case 'g':
        break;
    }
    return 0;
}

void showmenu(void)
{
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore\t\tp) pianist\n";
    cout << "t) tree\t\t\tg) game\n";
}