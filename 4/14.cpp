#include <iostream>
using namespace std;

union one2all
{
    char ch;
    int n;
};

int main(void)
{
    one2all num;
    num.ch = 'A';
    cout << "sizeof(one2all) = " << sizeof(one2all) << endl;
    cout << "num.ch = " << num.ch << endl;
    // 现在联合体中存放的是char类型的成员，此时打印联合体大小仍然会是4
    cout << "sizeof(one2all) = " << sizeof(one2all) << endl;
    // 在未初始化联合体中int成员值的情况下，打印int值测试，可以发现有默认值（随机）
    cout << "num.n = " << num.n << endl;
    return 0;
}