#include <iostream>

using namespace std;

struct travel_time
{
    int hour;
    int minute;
};

travel_time sum(const travel_time day1, const travel_time day2);
void show_time(const travel_time time);

int main(void)
{
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);
    return 0;
}

travel_time sum(const travel_time day1, const travel_time day2)
{
    travel_time total_time;
    total_time.hour = day1.hour + day2.hour;
    total_time.minute = day1.minute + day2.minute;
    int h = total_time.minute / 60;
    total_time.minute %= 60;
    total_time.hour += h;
    return total_time;
}

void show_time(const travel_time time)
{
    cout << time.hour << " hours and " << time.minute << " minutes";
}