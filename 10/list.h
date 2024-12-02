#ifndef __LIST_H__
#define __LIST_H__

typedef int Item;

void visit_item(Item& item);

class List
{
    private:
        static const int Max = 5;
        int top;
        Item list[Max];
    public:
        List();
        bool isEmpty() const;
        bool isFull() const;
        bool add(Item item);
        void visit(void (*pf)(Item&));
};

#endif