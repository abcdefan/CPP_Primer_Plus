#include <iostream>

using namespace std;

string left(const string str, int n = 3);
unsigned int left(unsigned long num, unsigned ct = 2);

int main(void)
{
    string s = "abcdefg";
    cout << left(s, 3) << endl;
    cout << left(s) << endl;
    cout << left(123456) << endl;
    cout << left(123456, 4) << endl;
    return 0;
}

string left(const string str, int n)
{
    string result = "";
    if (n < 0) return result;
    else
    {
        n = n < str.size() ? n : str.size();
        for (int i = 0; i < n; ++i)
            result += str[i];
        return result;
    }
}

unsigned int left(unsigned long num, unsigned ct)
{
    int i = 1;
    unsigned long temp = num;
    while (temp /= 10) // 最后i的值就是num的位数
        ++i; 
    if (ct <= i)
        for (int j = 0; j < i - ct; ++j)
            num /= 10;
    return (unsigned int)num;
}