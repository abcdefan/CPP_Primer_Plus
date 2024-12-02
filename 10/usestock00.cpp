#include <iostream>
#include "stock00.h"

using namespace std;

int main(void)
{
    Stock fluffy_the_cat; // 类的对象
    fluffy_the_cat.acquire("baidu", 20, 12.5);
    fluffy_the_cat.show();
    cout << endl;
    fluffy_the_cat.buy(10, 20);
    fluffy_the_cat.show();
    cout << endl;
    fluffy_the_cat.sell(40, 25);
    fluffy_the_cat.show();
    cout << endl;
    fluffy_the_cat.sell(20, 25);
    fluffy_the_cat.show();
    cout << endl;
    fluffy_the_cat.update(100);
    fluffy_the_cat.show();
    return 0;
}