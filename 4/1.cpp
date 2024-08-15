#include <iostream>

int main(void)
{
    using namespace std;

    int test[] = {};
    int abc[] = {1, 2};
    cout << sizeof(test) / sizeof(*test) << endl << sizeof(abc) / sizeof(*abc);
    return 0;
}