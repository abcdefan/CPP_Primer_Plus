#include <iostream>

using namespace std;

struct debts
{
    string name;
    double amount;
};

template <typename T>
T SumArray(T arr[], int size);
template <typename T>
T SumArray(T* arr[], int size);

int main(void)
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts db[3] = {{"a", 1}, {"b", 2}, {"c", 3}};
    double* pd[3];
    for (int i = 0; i < 3; i++)
        pd[i] = &db[i].amount; // 一开始必须先定义指向
        // 不可以先*pd[i] = db[i].amout;
    cout << "The sum of things is " << SumArray(things, 6) << endl;
    cout << "The sum of debt is " << SumArray(pd, 3) << endl;
    return 0;
}

template <typename T>
T SumArray(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray(T* arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
        sum += *arr[i];
    return sum;
}