#include <iostream>

using namespace std;

int main(void)
{
    double array[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = array;
    cout << "*++pt = " << *++pt << endl;     //  *和++的优先级是一样的，但按从右到右的顺序运行 32.8
    cout << "++*pt = " << ++*pt << endl;     // 先用*取出32.8再++得到33.8
    cout << "(*pt)++ = " << (*pt)++ << endl; // 先用*取出33.8，然后输出，再++变成34.8
    cout << "*pt = " << *pt << endl;         // 这时候会上面一行输出后++得到的34.8
    cout << "*pt++ = " << *pt++ << endl;     // 右优先原则，先++后*，但这个++是后缀，所以先*取值再++移动指针了
    cout << "*pt = " << *pt << endl;         // 输出数组的第3个元素23.4
    return 0;
}