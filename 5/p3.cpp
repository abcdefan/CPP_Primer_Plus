#include <iostream>

using namespace std;

int main(void)
{
    int num;
    cout << "Enter a number to num, when num is 0 will exit:";
    cin >> num;
    int sum;
    while (num != 0)
    {
        sum += num;
        cin >> num;
    }
    cout << sum << endl;
    return 0;
}