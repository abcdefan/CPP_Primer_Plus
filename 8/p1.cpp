#include <iostream>

using namespace std;

void display(string str);
void display(string str, int times);

int main(void)
{
    display("hello");
    display("hello", 3);
    return 0;
}

void display(string str)
{
    cout << str << endl;
}

void display(string str, int times)
{
    while (times--)
        cout << str << endl;
}