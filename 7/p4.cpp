#include <iostream>

using namespace std;

long double probility(int number, int picks);

int main(void)
{
    long double result = probility(47, 5) * probility(27, 1);
    cout << "Result: " << result << endl;
}   

long double probility(int numbers, int picks)
{
    double n, p;
    long double result = 1;
    for (n = numbers, p = picks; p > 0; --n, --p)
    {
        result *= p / n; // 上一轮的结果乘以本轮的结果
    }
    return result;
}