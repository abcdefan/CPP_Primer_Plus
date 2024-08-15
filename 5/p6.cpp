#include <iostream>

using namespace std;

int main(void)
{
    const string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int ans[3][12];
    int total_sale = 0;
    for (int year = 0; year < 3; ++year)
    {
        int each_year_sale = 0;
        cout << "Now please enter the " << year + 1 << " year's sales\n";
        for (int month = 0; month < 12; ++month)
        {
            cout << months[month] << ":";
            cin >> ans[year][month];
            each_year_sale += ans[year][month];
            total_sale += ans[year][month];
        }
        cout << "The " << year + 1 << " year's sale is " << each_year_sale << endl;
    }
    cout << "The three years's total sale is " << total_sale << endl;
    return 0;
}