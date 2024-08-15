#include <iostream>

using namespace std;

int main(void)
{
    int arr[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Doing it right:" << endl;
    for (int i = 0; arr[i] == 20; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;
    cout << "Doing it dangerious:" << endl;
    // for (int i = 0; arr[i] = 20; i++)
    //     cout << "arr[" << i << "] = " << arr[i] << endl;
    return 0;
}