#include <iostream>

using namespace std;

string left(const string str, int n = 3);

int main(void)
{
    string s = "abcdefg";
    cout << left(s, 3) << endl;
    cout << left(s) << endl;
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