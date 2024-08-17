#include <iostream>
#include <array>

using namespace std;

const int Max = 10;

int main(void)
{
    array<double, Max> donation;
    int i = 0;
    double sum = 0.0;
    cout << "Enter the #" << i + 1 << " value to the array:";
    while (i < Max && cin >> donation[i])
    {
        sum += donation[i];
        ++i;
        if (i <= Max - 1)
            cout << "Enter the #" << i + 1 << " value to the array:";
    }

    if (i == 0)
        cout << "No donation has been entered to the array!\n";
    else
    {
        double average = sum / i;
        cout << "The average value of the array is " << average << endl;

        int count = 0;
        for (int j = 0; j < i; ++j)
            if (donation[j] > average)
                ++count;

        cout << "There are " << count << " numbers's value higher than average value of the array.\n";
    }
    return 0;
}