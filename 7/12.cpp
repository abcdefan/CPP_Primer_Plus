#include <iostream>
#include <cmath>

using namespace std;

const double Rad_to_deg = 57.29577951;

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(const rect rplace);
void show_polar(const polar pplace);

int main(void)
{
    cout << "Enter the x and y value: ";
    rect rplace;
    polar pplace;
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two number (q to quit):";
    }
    return 0;
}

polar rect_to_polar(const rect rplace)
{
    polar pplace;
    pplace.distance = sqrt(rplace.x * rplace.x + pow(rplace.y, 2));
    pplace.angle = atan2(rplace.y, rplace.x); // atan2会返回弧度
    return pplace;
}

void show_polar(const polar pplace)
{
    cout << "The distance is " << pplace.distance << " and the angle is " << pplace.angle * Rad_to_deg << " degree.\n";
}