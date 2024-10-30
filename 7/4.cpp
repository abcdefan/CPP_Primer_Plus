#include <iostream>

using namespace std;

long double probility(int number, int picks);

int main(void)
{
    cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";
    int numbers, picks;
    while (cin >> numbers >> picks && picks <= numbers)
    {
        // cout.setf(ios_base::fixed);
        // cout.precision(3);
        cout << "You have one chance in " << probility(numbers, picks) << " of winning.\n";
        cout << "Please enter next two number(q to quit).\n";
    }
    cout << "Bye!\n";
}   

long double probility(int numbers, int picks)
{
    double n, p;
    long double result = 1;
    for (n = numbers, p = picks; p > 0; --n, --p)
    {
        result *= n / p; // 上一轮的结果乘以本轮的结果
    }
    return result;
}