#include <iostream>
#include "stock11.h"

using namespace std;

int main(void)
{
    Stock fluffy_the_cat = Stock("baidu", 20, 12.5); // 类的对象
    fluffy_the_cat.show();
    cout << endl;
    Stock fluffy_the_cat2("tecent", 20, 12.5); // 类的对象
    fluffy_the_cat2.show();
    cout << endl;
    cout << "Assigning stock1 to stock2:\n";
    fluffy_the_cat2 = fluffy_the_cat;

    fluffy_the_cat.show();
    cout << endl;
    fluffy_the_cat2.show();

    cout << "Using a constructor to reset an object:\n";
    fluffy_the_cat = Stock("jd", 14, 21); // 创建临时类对象，将其赋值给f_t_c 
    fluffy_the_cat.show();

    const Stock cs {"didi", 10L, 10};
    cs.show();
    return 0;
}