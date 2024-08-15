#include <iostream>
using namespace std;

// long long factorial(int n)
// {
//     if (n == 1 || n == 0) return 1;
//     return n * factorial(n - 1);
// }

// int main(void)
// {   
//     for (int i = 0; i <= 15; i++)
//         cout << i << "! = " << factorial(i) << endl;
//     return 0;
// }

int main(void)
{
    long long factorial[16];
    factorial[0] = factorial[1] = 1;
    for (int i = 2; i < 16; i++)
        factorial[i] = i * factorial[i - 1];
    for (int i = 0; i <= 15; i++)
        cout << i << "! = " << factorial[i] << endl;
}