#include <iostream>
#include "list.h"

List::List()
{
    top = 0;
}

bool List::isEmpty() const
{
    return top == 0 ? true : false;
}

bool List::isFull() const
{
    return top == Max ? true : false;
}

bool List::add(Item item)
{
    if (isFull() == false)
    {
        list[top++] = item;
        return true;
    }
    else return false;
}

void List::visit(void (*pf)(Item&))
{
    for (int i = 0; i < top; i++)
        pf(list[i]);
}

void visit_item(Item& item)
{
    std::cout << "Item = " << item << std::endl;
}