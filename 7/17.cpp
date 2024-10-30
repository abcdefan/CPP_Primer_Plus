#include <iostream>

using namespace std;

const int Len = 66;
const int Times = 6;

void subdivide(char arr[Len], int left, int right, int levels);

int main(void)
{
    char ruler[Len];
    
    for (int i = 0; i < Len; ++i)
        ruler[i] = ' ';
    
    int left = 0;
    int right = Len - 2;
    ruler[Len - 1] = '\0';
    ruler[left] = ruler[right] = '|';
    cout << ruler << endl;

    for (int i = 1; i <= Times; ++i)
    {
        subdivide(ruler, left, right, i);
        cout << ruler << endl;
    }


    return 0;
}

void subdivide(char arr[], int left, int right, int levels)
{
    if (levels == 0)
        return;
    int mid = left + (right - left) / 2; // 这样能避免int爆范围
    arr[mid] = '|';
    subdivide(arr, left, mid, levels - 1);
    subdivide(arr, mid, right, levels - 1);
}
