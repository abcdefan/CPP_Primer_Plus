#include <iostream>

using namespace std;

int main(void)
{
    int num;
    do
    {
        cout << "Enter numbers in the range 1-10 to find:";
        cin >> num;
    } while (num != 3);
    cout << "you find it!" << endl;
    return 0;
}