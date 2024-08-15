#include <iostream>

int main(void)
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3; // 整数的3转为float
    cout << "tree = " << tree << endl;

    int guess = 3.9832; // 浮点数转为int，这个浮点数没有超过int范围
    cout << "guess = " << guess << endl;

    int debt = 7.2E12; // 首先是浮点数，并且溢出了int的范围
    cout << "debt = " << debt << endl;

    return 0;
}