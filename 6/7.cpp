#include <iostream>
#include <climits> // 导入INT_MAX和INT_MIN

bool isInt(long num);

using namespace std;

int main(void)
{
    long num;
    cout << "Enter a proper number to the num:";
    cin >> num;
    while (!isInt(num))
    {
        cout << "Out of range, please enter again:";
        cin >> num;
    }
    int ans = (int)num;
    cout << "num = " << ans << endl;
    return 0;
}

bool isInt(long num)
{
    if (num >= INT_MIN && num <= INT_MAX)
        return true;
    else
        return false;
}