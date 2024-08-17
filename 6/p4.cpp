#include <iostream>

using namespace std;

const int strsize = 20;

struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int perference;         // 0 = fullname, 1 = title, 2 = bopname
};

void showmenu(void);

int main(void)
{
    bop *pt = new bop[3];

    // 用指针给第一个bop变量赋值
    strcpy(pt->fullname, "Rick");
    strcpy(pt->title, "Level_A");
    strcpy(pt->bopname, "RR");
    pt->perference = 0;
    // 用指针给第二个bop变量赋值
    strcpy((pt + 1)->fullname, "Jack");
    strcpy((pt + 1)->title, "Level_B");
    strcpy((pt + 1)->bopname, "JJ");
    (pt + 1)->perference = 1;
    // 用数组给第三个bop变量赋值
    strcpy(pt[2].fullname, "Motty");
    strcpy(pt[2].title, "Level_C");
    strcpy(pt[2].bopname, "MM");
    pt[2].perference = 2;

    showmenu();
    cout << "Enter your choice:";
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            for (int i = 0; i < 3; ++i)
                cout << pt[i].fullname << endl;
            break;
        case 'b':
            for (int i = 0; i < 3; ++i)
                cout << pt[i].title << endl;
            break;
        case 'c':
            for (int i = 0; i < 3; ++i)
                cout << pt[i].bopname << endl;
            break;
        case 'd':
            for (int i = 0; i < 3; ++i)
                switch (pt[i].perference)
                {
                case 0:
                    cout << pt[i].fullname << endl;
                    break;
                case 1:
                    cout << pt[i].title << endl;
                    break;
                case 2:
                    cout << pt[i].bopname << endl;
                    break;
                }
            break;
        default:
            cout << "Please enter character a, b, c, d or q\n";
        }
        cout << "Next choice:";
        cin >> choice;
    }

    cout << "Bye!\n";
    delete[] pt;
    return 0;
}

void showmenu(void)
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name \t b. display by title\n";
    cout << "c. display by bopname \t d. display by perference\n";
    cout << "q. quit\n";
}