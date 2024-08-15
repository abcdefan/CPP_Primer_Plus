#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    int a = INT_MAX;
    unsigned int b = INT_MAX;
    cout << "有符号整数上溢出的情况：a + 1 = " << a + 1 << endl;
    cout << "无符号整数上溢出的情况：b + 1 = " << b + 1 << endl;
    int c = 0;
    unsigned int d = 0;
    cout << "有符号整数下溢出的情况：c - 1 = " << c - 1 << endl;
    cout << "无符号整数下溢出的情况：d - 1 = " << d - 1 << endl;
    return 0;
}