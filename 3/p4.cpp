#include <iostream>
const int MINUTE_TO_SECOND = 60;
const int HOUR_TO_SECOND = 60 * 60;
const int DAY_TO_SECOND = 24 * 60 * 60;

int main(void)
{
    using namespace std;

    int days, hours, minutes, seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    days = seconds / DAY_TO_SECOND;
    seconds %=  DAY_TO_SECOND;
    hours = seconds / HOUR_TO_SECOND;
    seconds %=  HOUR_TO_SECOND;
    minutes = seconds / MINUTE_TO_SECOND;
    seconds %=  MINUTE_TO_SECOND;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}