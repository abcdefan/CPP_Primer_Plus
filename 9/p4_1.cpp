#include <iostream>
#include "p4.h"

using namespace std;

namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        s.average = s.max = s.min = ar[0];
        if (n > QUARTERS) n = QUARTERS;
        for (int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
            s.average += s.sales[i];
            if (ar[i] > s.max) s.max = ar[i];
            if (ar[i] < s.min) s.min = ar[i]; 
        }
        s.average /= n;
    }

    void setSales(Sales& s)
    {
        s.average = 0;
        s.max = __DBL_MIN__; 
        s.min = __DBL_MAX__; 
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter a double value to the sales[" << i << "]:";
            cin >> s.sales[i];
            s.average += s.sales[i];
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min) s.min = s.sales[i]; 
        }
        s.average /= QUARTERS;
    }

    void showSales(const Sales& s)
    {
        for (int i = 0; i < QUARTERS; i++)
            cout << "sales[" << i << "] = " << s.sales[i] << endl;
            cout << "average = " << s.average << endl;
            cout << "max = " << s.max << endl;
            cout << "min = " << s.min << endl;
    }
}