#include <iostream>

using namespace std;

const int Max = 5;
double *fill_array(double arr[], double *end);
void show_array(double arr[], double *end);
void revalue_array(double arr[], double *end, double factor);

int main(void)
{
    double properties[Max];
    double *tail = properties + Max - 1;
    double *end = fill_array(properties, tail);
    show_array(properties, end);

    if (end != properties - 1)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Bad input, plz input again: ";
        }
        revalue_array(properties, end, factor);
        show_array(properties, end);
    }

    return 0;
}

double *fill_array(double arr[], double *end)
{
    double temp;
    double *cur = arr - 1;
    int i = 0;
    while (cur != end)
    {
        double temp = 0;
        cout << "Enter value #" << i+1 << ": ";
        cin >> temp;
        if (!cin || temp < 0)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Bad input and the process terminates.\n";
            break;
        }
        else
        {
            arr[i++] = temp;
            cur += 1;
        }
            
    }
    return cur; // 返回指向最后一个数组元素的指针
}

void show_array(double arr[], double *end)
{
    double *p = arr;
    while (p != end)
    {
        cout << *p << "\t";
        ++p;
    }
    cout << *p << endl; // 打印最后一个元素并换行

}

void revalue_array(double arr[], double *end, double factor)
{
    double *p = arr;
    while (p != end)
    {
        *p *= factor;
        ++p;
    }
    *p *= factor; // p == end的时候最后再来一次
}