#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
    top = 0;
}

bool Stack::isEmpty() const
{
    return top == 0 ? true : false; 
}

bool Stack::isFull() const
{
    return top == MAX ? true : false;
}

bool Stack::push(const Item& item)
{
    if (top == MAX)
    {
        cout << "The stack is full, can not push anything!\n";
        return false;
    }
    else
    {
        items[top++] = item;
        return true;
    }
}

bool Stack::pop(Item& item)
{
    if (top == 0)
    {
        cout << "The stack is empty, can not pop anything!\n";
        return false;
    }
    else
    {
        item = items[--top]; // top指向栈顶的上一个位置，所以必须--top
        return true;
    }   
}