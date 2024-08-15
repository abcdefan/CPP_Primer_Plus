#include <iostream>
const int Feet_per_inche = 12;

int main(void)
{
    using namespace std;

    int height;
    cout << "请用一个整数指出自己的身高是多少英寸_";
    cin >> height;
    cout << "我的身高是" << height / Feet_per_inche << "英尺" << height % Feet_per_inche << "英寸" << endl;
    return 0;
}