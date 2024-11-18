#include <iostream>

using namespace std;

void repeat(int times, string content);
void repeat(string content, int times = 5);

int main(void)
{
    repeat(10, "hhh");
    return 0;
}

void repeat(int times, string content)
{
    for (int i = 0; i < times; ++i)
        cout << content << endl;
}

void repeat(string content, int times)
{
    for (int i = 0; i < times; ++i)
        cout << content << endl;    
}