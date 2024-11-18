#include <iostream>
#include "coordin.h"

using namespace std;

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