#ifndef __COORDIN_H__
#define __COORDIN_H__

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

#endif