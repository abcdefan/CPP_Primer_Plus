#include <iostream>

using namespace std;

template <typename T> // 这里没有分号
void Swap(T& a, T& b);

int main(void)
{
    int i = 10, j = 20;
    float ii = 1.0f, jj = 2.0f;
    Swap(i, j);
    Swap(ii, jj);
    cout << "i = " << i << ", j = " << j << endl;
    cout << "ii = " << ii << ", jj = " << jj << endl;

    return 0;
}

template <typename T> // 这里没有分号
void Swap(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}



