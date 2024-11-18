#include <iostream>

using namespace std;

const int Size = 5;

template <typename T>
T maxn(T arr[], int size);

int main(void)
{
    int iarr[Size] = {1, 2, 3, 4, 5};
    double darr[Size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "The max value in iarr is " << maxn(iarr, Size) << endl;
    cout << "The max value in darr is " << maxn(darr, Size) << endl;
    return 0;
}

template <typename T>
T maxn(T arr[], int size)
{
    T max = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}