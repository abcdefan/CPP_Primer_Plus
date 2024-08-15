#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cout << "Enter two num to a and b:";
    cin >> a >> b;
    int sum = 0;
    for (; a <= b; a++)
        sum += a;
    cout << sum << endl;
    return 0;
}