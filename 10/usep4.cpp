#include <iostream>
#include "p4.h"

using namespace std;
using namespace SALES;

int main(void)
{
    const double arr[3] = {4.4};
    Sales A(arr, 1);
    Sales B;
    B.showSales();
    B.setSales();
    A.showSales();
    B.showSales();
    return 0;
}
