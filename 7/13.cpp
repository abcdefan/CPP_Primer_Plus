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

void rect_to_polar(rect *pr, polar *pp);
void show_polar(const polar *pp);

int main(void)
{
    cout << "Enter the x and y value: ";
    rect rplace;
    polar pplace;
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two number (q to quit):";
    }
    return 0;
}

void rect_to_polar(rect *pr, polar *pp)
{
    pp->distance = sqrt(pr->x * pr->x + pow(pr->y, 2));
    pp->angle = atan2(pr->y, pr->x); // atan2会返回弧度
}

void show_polar(const polar *pp)
{
    cout << "The distance is " << pp->distance << " and the angle is " << pp->angle * Rad_to_deg << " degree.\n";
}