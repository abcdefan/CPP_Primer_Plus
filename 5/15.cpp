#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
    cout << "Enter the delay time in seconds:";
    int seconds;
    cin >> seconds;
    clock_t delay = seconds * CLOCKS_PER_SEC; // 秒* 每秒多少个时钟节拍 = 几秒一共多少时钟节拍
    clock_t start = clock();                  // 起始的时间
    while (clock() - start < delay)           // 当前的时间 - 开始的时间 < 想要延迟的时间
        ;                                     // 空循环，也可以直接写上面那行，自动格式化后会到第二行而已
    cout << "done!\n";
    return 0;
}