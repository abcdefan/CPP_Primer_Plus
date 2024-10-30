#include <iostream>

using namespace std;

long long factorial(int n);

int main(void)
{
    int n = 0;
    cout << "Enter a number(>0) and count its factorial:";
    while (cin >> n && n >= 0)
    {
        cout << n << "!""=" << factorial(n) << endl;
        cout << "Enter a number(>0) and count its factorial and you can press 'q' to quit:";
    }
    return 0;
}

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}