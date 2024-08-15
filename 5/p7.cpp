#include <iostream>
#include <string>
using namespace std;

struct car
{
    string make;
    int year;
};

int main(void)
{
    cout << "How many cars do you wish to catalog?";
    int n;
    cin >> n;
    car *pt = new car[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make:";
        cin.get();
        getline(cin, pt[i].make);
        cout << "Please enter the year made:";
        cin >> pt[i].year;
    };
    cout << "Here is your collection:\n";
    for (int i = 0; i < n; ++i)
        cout << pt[i].year << " " << pt[i].make << endl;
    delete[] pt;
    return 0;
}