#include <iostream>

using namespace std;

unsigned int c_in_str(const char *str, const char c);

int main(void)
{
    char mmm[15] = "minimum";
    const char *wail = "ululate";
    
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char *str, const char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
            ++count;
        ++str;
    }
    return count;
}
