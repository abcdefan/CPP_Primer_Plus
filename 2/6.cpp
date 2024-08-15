#include <iostream>
void Simon(int n); // 函数原型的声明

int main(void)
{
    using namespace std;
    int n;
    cin >> n;
    Simon(n);
    return 0;
}

void Simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}