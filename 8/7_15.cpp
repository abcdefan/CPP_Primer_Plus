#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Season_names = {"spring", "summer", "fall", "winter"};

void fill(array<double, Seasons>& arr);
void display(const array<double, Seasons>& arr);

int main(void)
{
    array<double, Seasons> expense;
    fill(expense);
    display(expense);
    return 0;
}

void fill(array<double, Seasons>& arr)
{
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "Enter the expense in the " << Season_names[i] << ": ";
        cin >> arr[i];
    }
        
}

void display(const array<double, Seasons>& arr)
{
    double sum = 0;
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "The expense in " << Season_names[i] << " is " << arr[i] << endl;
        sum += arr[i];
    }
    cout << "The total expenses in this year is " << sum << endl;
}