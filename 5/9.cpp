#include <iostream>
using namespace std;

int main(void)
{
    cout << "Calculate five numbers sum and average" << endl;
    cout << "Please enter five numbers:";

    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum = " << sum << " and average = " << (double)sum / 5 << endl;
    return 0;
}