#include <iostream>

int main(void)
{
    using namespace std;

    int auks, bats, coots;

    auks = 19.99 + 11.99; // 初始化时double转整型
    cout << "auks = " << auks << endl;

    bats = (int)19.99 + (int)11.99;
    cout << "bats = " << bats << endl;

    coots = int(19.99) + int(11.99);
    cout << "coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is " << (int)ch << endl;
    cout << static_cast<int>(ch) << endl;

    return 0;
}