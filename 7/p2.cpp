#include <iostream>

using namespace std;

const int Max = 10;

int fill_arr(double arr[], int n);
void show_arr(double arr[], int n);
double average_arr(double arr[], int n);


int main(void)
{
    double scores[Max];
    int real_size = fill_arr(scores, Max);
    if (real_size)
    {
        show_arr(scores, real_size);
        cout << "The average score is " << average_arr(scores, real_size) << endl;
    }
    else
        cout << "There is any score in the scores array.\n";
    return 0;
}

int fill_arr(double arr[], int n)
{
    int i = 0;
    for (; i < n; ++i)
    {
        cout << "Please enter #" << i + 1 << ":" ;
        cin >> arr[i];
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n');
            return i;
        }
    }
    return n; // 数组被塞满的情况
}

void show_arr(double arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << '\t';
    }
}

double average_arr(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum / n;
}
