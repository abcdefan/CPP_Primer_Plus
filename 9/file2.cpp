#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

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