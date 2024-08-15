#include <iostream>
#include <climits>

int main(void)
{
    using namespace std;
    int n_int = INT_MAX;
    cout << "int is " << sizeof n_int << " bytes" << endl;
    cout << "short is " << sizeof(short) << " bytes" << endl;
    cout << "long is " << sizeof(long) << " bytes" << endl;
    cout << "long long is " << sizeof(long long) << " bytes" << endl;
    return 0;
}