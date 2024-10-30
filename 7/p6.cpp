#include <iostream>

using namespace std;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int real_size);
void Reverse_array(double arr[], int real_size);

const int Size = 10;

int main(void)
{
    double arr[Size];
    cout << "Now you should enter some numbers to fill the arr.\n";
    int real_size = Fill_array(arr, Size);
    Show_array(arr, real_size);
    Reverse_array(arr, real_size);
    Show_array(arr, real_size);
    return 0;
}

int Fill_array(double arr[], int size)
{
    int i = 0;
    for (; i < Size; ++i)
    {
        cout << "Enter a number to the arr[" << i << "]:";
        cin >> arr[i];
        while (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "You enter an invaild number and the fill_array will terminate.\n";
            return i;
        }
    }
    return size;
}

void Show_array(double arr[], int real_size)
{
    for (int i = 0; i < real_size; ++i)
    {
        if (i != real_size - 1)
            cout << arr[i] << '\t';
        else
            cout << arr[i] << endl;
    }
}

void Reverse_array(double arr[], int real_size)
{
    // 反转数组中除第一个和最后一个元素之外的所有元素
    if (real_size >= 0 && real_size <= 3)
        return;
    else
        for (int i = 1; i < real_size / 2; ++i)
            swap (arr[i], arr[real_size - 1 - i]);
}
