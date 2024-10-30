#include <iostream>

using namespace std;

char* buildstr(const char ch, const int n);

int main(void)
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;
    cout << "Enter an integer: ";
    int times;
    cin >> times;
    char *pt = buildstr(ch, times);
    cout << pt << endl; // 这里如果是*pt的话只会打印字符串首个字符，打印pt地址会直接打印字符串
    delete[] pt;
    
    return 0;
}

char* buildstr(const char ch, const int n)
{
    char *pt = new char[n+1];
    pt[n] = '\0'; // 字符串结尾是空字符
    for (int i = 0; i < n; ++i)
        pt[i] = ch;
    return pt;
}