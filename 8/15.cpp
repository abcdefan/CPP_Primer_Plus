#include <iostream>

using namespace std;

template <typename T>
T lesser(T a, T b)
{
    cout << "使用的是函数模板" << endl;
    return a < b ? a : b;
}

template <>
int lesser<int>(int a, int b)
{
    cout << "使用的是显示具体化的函数模板" << endl;
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    cout << "使用的是常规函数" << endl;
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main(void)
{
    int m = 20;
    int n = -30;

    double x  = 15.5;
    double y = 25.9;
    cout << lesser(x, y) << endl;
    cout << lesser<int>(x, y) << endl;

    cout << lesser(m, n) << endl;
    cout << lesser<>(m, n) << endl;
    return 0;
}