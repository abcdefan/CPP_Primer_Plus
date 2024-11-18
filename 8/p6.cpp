#include <iostream>

using namespace std;

template <typename T>
T maxn(T arr[], int size);

template <> string maxn(string arr[], int size);

int main(void)
{
    int iarr[6] = {1, 2, 3, 4, 5, 6};
    double darr[4] = {1.1, 2.2, 3.3, 4.4};
    string sarr[4] = {"a", "ab","anc", "ac"};
    cout << "The max value in iarr is " << maxn(iarr, 6) << endl;
    cout << "The max value in darr is " << maxn(darr, 4) << endl;
    cout << "The longest string's address in sarr is ";
    for (int i = 0; i < 4; i++)
    {
        if (sarr[i] == maxn(sarr, 4))
        {
            cout << &sarr[i] << endl;
            break;
        }
    }
    return 0;
}

template <typename T>
T maxn(T arr[], int size)
{
    T max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template <> string maxn(string arr[], int size)
{
    int maxLength = arr[0].size();
    string longest = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i].size() > maxLength)
        {
            maxLength = arr[i].size();
            longest = arr[i];
        }
    }
    return longest;
}