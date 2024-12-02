#include <iostream>
#include "stack.h"

using namespace std;

int main(void)
{
    Stack s = Stack();
    char ch;
    Item value;
    cout << "Please enter 'a' or 'A' to push to stack, 'p' or 'P' to pop from stack, 'q' or 'Q' to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        ch = toupper(ch);
        while (cin.get() != '\n') continue; // 清空当前输入
        switch (ch)
        {
        case 'A':
            if (s.isFull())
            {
                cout << "The stack is already full.\n";
            }
            else
            {
                cout << "Enter a number you want to push to the stack:";
                cin >> value;
                s.push(value);
            }
            break; 
        case 'P':
            if (s.isEmpty())
            {
                cout << "The stack is already empty.\n";
            }
            else
            {
                s.pop(value);
                cout << "The poped number is " << value << endl;
            }
            break;
        default:
            break;
        }
           cout << "Please enter 'a' or 'A' to push to stack, 'p' or 'P' to pop from stack, 'q' or 'Q' to quit.\n";
    } 
    // cout << (s.isEmpty() == 1 ? "stack s is empty" : "stack s is not empty") << endl;
    // s.push(1000);
    // cout << (s.isEmpty() == 1 ? "stack s is empty" : "stack s is not empty") << endl;
    // for(int i = 0; i < 11; i++)
    //     s.push(i);
    // cout << (s.isFull() == 1 ? "stack s is full" : "stack s is not full") << endl;
    // Item popValue;
    // s.pop(popValue);
    // cout << "The poped value is " << popValue << endl;
    // cout << (s.isFull() == 1 ? "stack s is full" : "stack s is not full") << endl;
    return 0;
}