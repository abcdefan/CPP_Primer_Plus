#include <iostream>
const double DEGREE_TO_MINUTE = 60;
const double MINUTE_TO_SECOND = 60;

int main(void)
{
    using namespace std;

    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    double answer = degrees + minutes / DEGREE_TO_MINUTE + seconds / MINUTE_TO_SECOND / DEGREE_TO_MINUTE;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << answer << " degrees\n"; 

    return 0;
}