#include <iostream>

using namespace std;

const int Max = 5;
int fill_array(double arr[], int n);
void show_array(const double arr[], int n);
void revalue_array(double arr[], int n, double factor);

int main(void)
{
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Bad input, plz input again: ";
        }
        revalue_array(properties, size, factor);
        show_array(properties, size);
    }

    return 0;
}

int fill_array(double arr[], int n)
{
    double temp;
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        double temp = 0;
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin || temp < 0)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Bad input: please process terminated.\n";
            break;
        }
        else
            arr[i] = temp;
    }
    return i; // 返回成功输入的房地产价格的个数
}

void show_array(const double arr[], int n)
{
     for (int i = 0; i < n; ++i)
     {
        if (i == n - 1)
            cout << arr[i] << endl; 
        else
            cout << arr[i] << "\t";
     }
}

void revalue_array(double arr[], int n, double factor)
{
    for (int i = 0; i < n; ++i)
        arr[i] *= factor;
}