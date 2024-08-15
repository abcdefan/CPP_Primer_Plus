#include <iostream>

int main(void)
{
    using namespace std;

    char ch = 'M';
    int i = ch;
    cout << "The ascii code for " << ch << " is " << i << endl;

    ch += 1;
    i = ch;
    cout << "The ascii code for " << ch << " is " << i << endl;
    return 0;
}