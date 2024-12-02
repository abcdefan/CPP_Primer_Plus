#include <iostream>
#include "list.h"

using namespace std;

int main(void)
{
    List list;
    Item num;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter a number to num:";
        cin >> num;
        list.add(num);
        list.visit(visit_item);
    }
    return 0;
}