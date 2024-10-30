#include <iostream>
 
using namespace std;

void n_chars(int n, char c);

int main(void)
{
    cout << "Enter a character: ";
    char c;
    cin >> c;
    int n;
    while (c != 'q')
    {
        cout << "Enter a number: ";
        cin >> n;
        n_chars(n, c);
        cout << "Enter another char to c (press q to quit):";
        cin >> c;
    }
    return 0;
}

void n_chars(int n, char c)
{
    for (int i = 0; i < n; i++)
        cout << c << " ";
    cout << endl;
}