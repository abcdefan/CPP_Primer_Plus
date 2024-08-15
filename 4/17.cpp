#include <iostream>

int main(void)
{
    using namespace std;

    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights = " << nights << " and its location is " << &nights << endl;
    cout << "*pt = " << *pt << " and its location is " << pt << endl;

    double *pd = new double;
    *pd = 10000001.0;

    cout << "*pd = " << *pd << " and its location is " << pd << endl;
    cout << "&pd = " << &pd << endl;
    cout << "sizeof(pt) = " << sizeof(pt) << endl;
    cout << "sizeof(pd) = " << sizeof(pd) << endl;
    return 0;
}