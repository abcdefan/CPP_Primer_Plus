#include <iostream>

using namespace std;

template <typename T> // 这里没有分号
void Swap(T& a, T& b);
template <typename T>
void Swap(T a[], T b[], int n);

int main(void)
{
    int i = 10, j = 20;
    float ii = 1.0f, jj = 2.0f;
    Swap(i, j);
    Swap(ii, jj);
    cout << "i = " << i << ", j = " << j << endl;
    cout << "ii = " << ii << ", jj = " << jj << endl;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    Swap(a, b, 5);
    for (auto aa : a)
        cout << aa << "\t";
    cout << endl;
    for (auto bb : b)
        cout << bb << "\t";
    return 0;
}

template <typename T> // 这里没有分号
void Swap(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}
template <typename T> // 这里没有分号
void Swap(T a[], T b[], int n)
{
    T temp;
    for (int i = 0; i < n; ++i)\
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}


