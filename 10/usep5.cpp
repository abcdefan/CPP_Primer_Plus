#include <iostream>
#include "p5.h"

int main(void)
{
    Stack s = Stack();
    customer a = {"a", 10.10};
    customer b = {"b", 20.20};
    customer c = {"c", 30.30};
    s.push(a);
    s.push(b);
    s.push(c);
    s.pop();
    s.show();
    s.pop();
    s.show();
    s.pop();
    s.show();
    return 0; 
}