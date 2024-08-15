#include <iostream>

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main(void)
{
    using namespace std;
    CandyBar arr[3];
    arr[0] = {"a", 1.1, 1};
    arr[1] = {"b", 2.2, 2};
    arr[2] = {"c", 3.3, 3};
    return 0;
}