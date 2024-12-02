#include <iostream>
#include "stock22.h"

using namespace std;

int main(void)
{
    Stock stock1 {"baidu", 10, 20};
    Stock stock2 {"ali", 15, 15};
    stock1.topval(stock2).show();
    return 0;
}