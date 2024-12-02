#ifndef __P5_H__
#define __P5_H__

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
    private:
        static const int Max = 3;
        int top;
        double total;
        Item stack[Max];
    public:
        Stack();
        void push(Item item);
        void pop();
        void show();
};

#endif