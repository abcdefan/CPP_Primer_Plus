#include <iostream>
using namespace std;
void function1(void);
void function2(void);

int main(void)
{
    function1();
    function1();
    function2();
    function2();
    return 0;
}

void function1(void)
{
    cout << "Three blind mice" << endl;
}

void function2(void)
{
    cout << "See how they run" << endl;
}