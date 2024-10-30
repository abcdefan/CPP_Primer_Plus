#include <iostream>

using namespace std;

void simple(void);

int main(void)
{
    cout << "main() will call the simple() function\n";
    simple();
    return 0;
}

void simple(void)
{
    cout << "I am a simple function\n";
} 

