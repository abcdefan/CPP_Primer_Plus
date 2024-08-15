#include <iostream>
int stonetolb(int num);

int main()
{
    using namespace std;
    cout << "Enter the weight in stones" << endl;
    int stones;
    cin >> stones;
    int pounds = stonetolb(stones);
    cout << stones << " stones = " << pounds << " pounds" << endl;
    return 0;
}

// 1 stone = 14lbs
int stonetolb(int stones)
{
    int pounds = 14 * stones;
    return pounds;
}