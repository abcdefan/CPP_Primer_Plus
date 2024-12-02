#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long Item;

class Stack
{
    private:
        static const int MAX = 10;
        Item items[MAX]; // 如果要修改栈中存放的数据类型，就修改typedef中的内容就行
        int top;
    public:
        Stack(); // 构造函数
        bool isEmpty() const;
        bool isFull() const;
        bool push(const Item& item);
        bool pop(Item& item);
};

#endif