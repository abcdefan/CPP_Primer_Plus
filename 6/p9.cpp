#include <iostream>
#include <fstream>

using namespace std;

struct donor
{
    string name;
    double amount;
};

int main(void)
{
    int number;

    ifstream inFile;
    inFile.open("p9.txt");

    if (!inFile.is_open())
    {
        cout << "Failed to open the file!\n";
        exit(EXIT_FAILURE);
    }

    cout << "Get the number of the donors through the first line of file\n";
    inFile >> number;

    if (number <= 0)
        exit(EXIT_FAILURE);

    donor *pt = new donor[number];
    for (int i = 0; i < number; ++i)
    {
        inFile.get();
        getline(inFile, (pt + i)->name);
        inFile >> (pt + i)->amount;
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

    inFile.close();
    return 0;
}