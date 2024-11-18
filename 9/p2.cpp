#include <iostream>

using namespace std;

const int ArSize = 10;

void strcount(const string str);

int main(void)
{
    string input;
    cout << "Enter a line: ";
    getline(cin, input);
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit): ";
        getline(cin, input);
    }
    cout << "ByeBye" << endl;
    return 0; 
}

void strcount(const string str)
{
    static int total = 0; // 只会初始化一次
    int count = str.size();
    total += str.size();
    cout << "current: " << count << " characters\n";
    cout << "total: " << total << " characters\n";
}