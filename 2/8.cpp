#include <iostream>
void Simon(int n);   // 函数原型的声明
using namespace std; // 命名空间作用在整个文件

int main(void)
{
    int n;
    cin >> n;
    Simon(n);
    return 0;
}

void Simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl;
}