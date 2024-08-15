#include <iostream>

int main(void)
{
    using namespace std;

    int cheat = 42;
    int waist = 0x42;
    int inseam = 042;
    cout << "cheat = " << cheat << " (in dec)" << endl;
    cout << hex; // 后面的语句以十六进制的形式打印
    cout << "waist = " << waist << " (in hex)" << endl;
    cout << oct; // 后面的语句以八进制的形式打印
    cout << "inseam = " << inseam << " (in oct)" << endl;

    cout << "cheat = " << cheat << " (in oct)" << endl; // 测试将原先十进制的cheat在八进制下打印
    return 0;
}