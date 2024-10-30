#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons = 4;
const char *Season_names[Seasons] = {"spring", "summer", "fall", "winter"};

void fill(double arr[]);
void display(double arr[]);

int main(void)
{
    double expense[Seasons];
    fill(expense);
    display(expense);
    return 0;
}

void fill(double arr[])
{
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "Enter the expense in the " << Season_names[i] << ": ";
        cin >> arr[i];
    }  
}

void display(double arr[])
{
    double sum = 0;
    for (int i = 0; i < Seasons; ++i)
    {
        cout << "The expense in " << Season_names[i] << " is " << arr[i] << endl;
        sum += arr[i];
    }
    cout << "The total expenses in this year is " << sum << endl;
}