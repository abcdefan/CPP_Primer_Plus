#include <iostream>
#include <array>

int main(void)
{
    using namespace std;
    
    array<double, 3> arr;
    cout << "Enter the first score in (s):";
    cin >> arr[0];
    cout << "Enter the second score in (s):";
    cin >> arr[1];
    cout << "Enter the third score in (s):";
    cin >> arr[2];
    cout << "The first score is " << arr[0] << "s." << endl;
    cout << "The second score is " << arr[1] << "s." << endl;
    cout << "The third score is " << arr[2] << "s." << endl;
    cout << "The three scores's average value is " << (arr[0] + arr[1] + arr[2]) / 3 << "s." << endl;
    return 0;
}