#include <iostream>

using namespace std;

struct debts
{
    string name;
    double amount;
};

void showArray(int arr[], int size);
template <typename T>
void showArray(T arr[], int size);
template <>
void showArray<debts>(debts arr[], int size);

int main(void)
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts db[3] = {{"a", 1}, {"b", 2}, {"c", 3}}; 
    double* pd[3];
    for (int i = 0; i < 3; ++i)
        pd[i] = (double*)&db[i];
    showArray(things, 6);
    showArray(db, 3);
    showArray(pd, 3);
    return 0;
}

void showArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << "\t";
    cout << endl;
    cout << "调用常规函数\n";
}

template <typename T>
void showArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << "\t";
    cout << endl;
    cout << "调用函数模板\n";
}

template <>
void showArray<debts>(debts arr[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i].name << "\t" << arr[i].amount << endl;
    cout << "调用显示具体化的函数模板\n";
}