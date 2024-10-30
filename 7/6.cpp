#include <iostream>

using namespace std;

const int Arsize = 8;

int sum_arr(int arr[], int n);

int main(void)
{
    int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof(cookies) << endl;
    cout << "size of memory: " << sizeof(&cookies) << endl;
    
    int sum = sum_arr(cookies, Arsize);
    cout << "Total cookies eaten: " << sum << endl;

    return 0;
}

int sum_arr(int arr[], int n) // 这里的int arr[]是指针而不是数组
{
    int sum = 0;
    cout << "arr address: " << arr << endl;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}