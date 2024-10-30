#include <iostream>

using namespace std;

const int Size = 5;

void display(const string arr[], const int n);

int main(void)
{
    cout << "Enter " << Size << " your favourite food:\n";

    string list[Size];
    
    for (int i = 0; i < Size; ++i)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }

    cout << "Your list: \n";
    display(list, Size);
    return 0;
}

void display(const string arr[], const int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (i != n - 1)
            cout << i + 1 << ": " << arr[i] << "\t";
        else
            cout << i + 1 << ": " << arr[i] << endl;
    }
}