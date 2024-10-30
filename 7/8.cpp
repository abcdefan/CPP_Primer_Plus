#include <iostream>

using namespace std;

const int Arsize = 8;

int sum_arr(const int * begin, const int * end);

int main(void)
{
    int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof(cookies) << endl;
    cout << "size of memory: " << sizeof(&cookies) << endl;
    
    int sum = sum_arr(cookies, cookies + Arsize);
    cout << "Total cookies eaten: " << sum << endl;

    return 0;
}

int sum_arr(const int * begin, const int * end) // 这里的int arr[]是指针而不是数组
{
    int sum = 0;
    const int *pt;
    for (pt = begin; pt != end; ++pt)
        sum += *pt;
    return sum;
}