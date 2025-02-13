#ifndef STACK_H
#define STACK_H

#define MAX_ITEMS 100
typedef int ItemType;

class Stack {
public:
    Stack();
    bool IsEmpty() const;
    bool IsFull() const;
    void push(ItemType newItem);
    void pop(ItemType& item);

private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif
