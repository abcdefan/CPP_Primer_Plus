#include <iostream>

int main(void)
{
    using namespace std;
    double european_consumption, american_consumption;
    cout << "Enter the number of european_consumption: ";
    cin >> european_consumption;
    american_consumption = 1 / european_consumption * 3.875 * 62.14;
    cout << "The European consumption converts to American consumption is: " << american_consumption << endl;
    return 0;
}




/*
原本是多少L/100km，要转换为多少mile/加仑
1加仑等于3.875升
先取个倒数，变成100km/L，也就是100km/(1/3.875)加仑，也就是倒数*3.875 (100km/加仑)
也就是倒数*3.875 （62.14mile/加仑 == 每加仑几个62.14mile）   所以答案是倒数 * 3.875 * 62.14 （mile/加仑）
注意最后是*62.14是因为，原本的值是每加仑几个62.14，这时候要用几*62.14得到多少mile，而不是除
*/