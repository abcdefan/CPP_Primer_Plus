#include <iostream>
#include "p4.h"

using namespace std;

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        max = min = ar[0];
        average = 0;
        if (n > QUARTERS) n = QUARTERS;
        for (int i = 0; i < n; i++)
        {
            sales[i] = ar[i];
            average += sales[i];
            if (ar[i] > max) max = ar[i];
            if (ar[i] < min) min = ar[i]; 
        }
        for (int i = n; i < QUARTERS; i++) sales[i] = 0;
        average /= QUARTERS;
    }

    Sales::Sales()
    {
        for (auto& i : sales) i = 0;
        max = min = average = 0;
    }

    void Sales::setSales()
    {
        average = 0;
        max = __DBL_MIN__; 
        min = __DBL_MAX__; 
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter a double value to the sales[" << i << "]:";
            cin >> sales[i];
            average += sales[i];
            if (sales[i] > max) max = sales[i];
            if (sales[i] < min) min = sales[i]; 
        }
        average /= QUARTERS;
    }

    void Sales::showSales() const
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << "sales[" << i << "] = " << sales[i] << endl;
        cout << "average = " << average << endl;
        cout << "max = " << max << endl;
        cout << "min = " << min << endl;
    }
}