#include <iostream>

int main(void)
{
    using namespace std;

    int limit;
    cout << "Enter a >0 int num apply to limit:" << endl;
    cin >> limit;
    
    for (int i = limit; i ; i--)
        cout << "C++ knows loop" << endl;

    return 0;
}