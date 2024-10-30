#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons = 4;
const char *Season_names[Seasons] = {"spring", "summer", "fall", "winter"};

struct Seasons_expenses
{
    double expense[Seasons];
};

void fill(Seasons_expenses &se);
void display(Seasons_expenses se);

int main(void)
{
    Seasons_expenses se;
    fill(se);
    display(se);
    return 0;
}

void fill(Seasons_expenses &se)
{
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "Enter the expense in the " << Season_names[i] << ": ";
        cin >> se.expense[i];
    }
        
}

void display(Seasons_expenses se)
{
    double sum = 0;
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "The expense in " << Season_names[i] << " is " << se.expense[i] << endl;
        sum += se.expense[i];
    }
    cout << "The total expenses in this year is " << sum << endl;
}