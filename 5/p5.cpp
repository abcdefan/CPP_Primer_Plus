#include <iostream>

using namespace std;

int main(void)
{
    string years[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    cout << "Enter each month has how many sales\n";
    int sale[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << years[i] << ":";
        cin >> sale[i];
        sum += sale[i];
    }
    cout << "this year's total sale is " << sum << endl;
    return 0;
}