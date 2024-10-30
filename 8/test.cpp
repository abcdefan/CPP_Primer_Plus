#include <iostream>

using namespace std;

int main(void)
{
    int a = 10; // a是左值 b是右值
    int b = a; // b是左值 a是右边值
    // 这里a和b都能作为左值，但是10只能作为右值
    int&& c = 10;
    return 0;
}