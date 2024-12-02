#include <iostream>
#include "stock22.h"

using namespace std;

int main(void)
{
    Stock st[4] 
    {
        Stock("byte dance", 10, 10),
        Stock("alibaba", 15, 9),
        Stock("", 0, 0),
        Stock("tecent", 20, 7)
    };
    // const Stock* max = &st[0];
    // for (int i = 1; i < 4; i++)
    //     max = &max->topval(st[i]); 
    //     // 这里的实际意思是&(max->topval(st[i]))，就是max去调用的，&顺序在最后，不是&max去调用的
    //     // 但是max->topval(st[i])返回值本身是对象，=号赋值要变成地址，所以要取址符号
    // max->show();
    //  &max->topval(st[i])还是有问题，这里对返回的临时对象取址 不安全
    Stock max = st[0];
    for (int i = 1; i < 4; i++)
        max = max.topval(st[i]);
    max.show();
    return 0;
}