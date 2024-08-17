#include <iostream>

using namespace std;

struct donor
{
    string name;
    double amount;
};

int main(void)
{
    int number;
    cout << "Enter the number of donors:";
    cin >> number;

    donor *pt = new donor[number];
    for (int i = 0; i < number; ++i)
    {
        cout << "Enter the #" << i + 1 << " donor's name:";
        cin.get();
        getline(cin, (pt + i)->name);
        cout << "Enter the #" << i + 1 << " donor's donation amount:";
        cin >> (pt + i)->amount;
    }

    // count the number of grand patrons and normal patrons
    int num_gp = 0, num_np = 0;
    for (int i = 0; i < number; ++i)
        if (pt[i].amount > 10000)
            ++num_gp;
        else
            ++num_np;

    cout << "The following names are grand patrons:\n";
    if (num_gp)
    {
        for (int i = 0; i < number; ++i)
            if (pt[i].amount > 10000)
                cout << pt[i].name << "\t";
    }
    else
        cout << "none";

    cout << endl;

    cout << "The following names are normal patrons:\n";
    cout << "Patrons:";
    if (num_np)
    {
        for (int i = 0; i < number; ++i)
            if (pt[i].amount <= 10000)
                cout << pt[i].name << "\t";
    }
    else
        cout << "none";
    cout << endl;

    return 0;
}