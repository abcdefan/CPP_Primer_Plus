#include <iostream>

using namespace std;

const int ArSize = 10;

void strcount(const char* str);

int main(void)
{
    char input[ArSize];
    char next;
    cout << "Enter a line: ";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next); // 捕获ArSize大小后面一个字符
        while (next != '\n') cin.get(next); // 这个这个字符不为空 就继续捕获掉 因为可能输入的是大于ArSize的字符串
        strcount(input);
        cout << "Enter next line (empty line to quit): ";
        cin.get(input, ArSize);
    }
    cout << "ByeBye" << endl;
    return 0; 
}

void strcount(const char* str)
{
    static int total = 0; // 只会初始化一次
    int count = 0;
    while (*str++)
        ++count;
    total += count;
    cout << count << "characters\n";
    cout << total << "characters\n";
}