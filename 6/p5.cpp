#include <iostream>

using namespace std;

int main(void)
{
    double salary;
    cout << "Enter your salary:";
    while (cin >> salary && salary >= 0)
    {
        double ans = 0;
        if (salary <= 5000)
            ans = 0;
        else if (salary >= 5001 && salary <= 15000)
            ans = (salary - 5000) * 0.1;
        else if (salary >= 15001 && salary <= 35000)
            ans = (salary - 15000) * 0.15 + 10000 * 0.1;
        else
            ans = (salary - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        cout << "所得税的值为：" << ans << endl;
    }
    cout << "You enter a negative number or char to terminate the programmer, bye!\n";
    return 0;
}