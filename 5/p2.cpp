#include <iostream>
#include <array>

using namespace std;

int main(void)
{
    array<long double, 101> arr;
    arr[0] = arr[1] = 1;
    for (int i = 2; i < 13; i++)
        arr[i] = i * arr[i - 1];
    // cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << arr[12] << endl;
    return 0;
}