#include <iostream>
#include "golf.h"

using namespace std;

int main(void)
{
    golf g[Size];
    int i = Size;
    int hc = 0;
    while (i > 0 && setgolf(g[i-1]))
    {
        // setgolf(g[i])返回0或1
        showgolf(g[i-1]);
        i--;
    }
    return 0;
}