#include <iostream>

using namespace std;

int main(void)
{
    int whitespace = 0;
    int digit = 0; // 数字
    int chars = 0; // 字符
    int punct = 0; // 标点符号
    int others = 0;

    char ch;
    cout << "Enter the text for analysis, and type @ to terminate the input:";
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
            ++chars;
        else if (isspace(ch))
            ++whitespace;
        else if (isdigit(ch))
            ++digit;
        else if (ispunct(ch))
            ++punct;
        else
            ++others;
        cin.get(ch);
    }
    cout << chars << " letters, " << whitespace << " whitespaces, " << digit << " digits, " << punct << " puncts, " << others << " others";

    return 0;
}