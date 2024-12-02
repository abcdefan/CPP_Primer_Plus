#include <iostream>
#include "p5.h"

Stack::Stack()
{
    top = 0;
    total = 0;
}

void Stack::push(Item item)
{
    if (top == Max)
        std::cout << "The stack is already full and can not push.\n";
    else stack[top++] = item;
}

void Stack::pop()
{
    if (top == 0)
        std::cout << "The stack is already empty and can not pop.\n";
    else total += stack[--top].payment;
}

void Stack::show()
{
    std::cout << "The current total payment is " << total << std::endl;
}