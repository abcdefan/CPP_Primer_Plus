#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    cout << "Enter six numbers and compare with your level." << endl;
    cout << "Terminate condition: when you make 6 number or enter a negative number." << endl;
    int i = 0, num, level, count = 0;
    vector<int> vec;
    do
    {
        cout << "enter a num to the number" << i + 1 << ":";
        cin >> num;
        if (num >= 0)
        {
            vec.push_back(num);
            i++;
        }
    } while ((i < 6) && (num >= 0));
    if (i == 0)
        cout << "No data.\n";
    else
    {
        cout << "Enter your level:";
        cin >> level;
        for (int n : vec)
            if (n > level)
                ++count;
    }
    cout << count << " numbers are bigger than your level" << endl;
    return 0;
}