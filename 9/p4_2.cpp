#include <iostream>
#include "p4.h"

using namespace std;
using namespace SALES;

int main(void)
{
    Sales A, B;
    const double arr[4] = {1.1, 3.3, 3.1, 4.2};
    setSales(A);
    showSales(A);
    setSales(B, arr, 4);
    showSales(B);
    return 0;
}
