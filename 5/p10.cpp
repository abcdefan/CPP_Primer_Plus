#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "." << " ";
        for (int z = n - i - 1; z < n; ++z)
            cout << "*" << " ";
        cout << endl;
    }
    return 0;
}