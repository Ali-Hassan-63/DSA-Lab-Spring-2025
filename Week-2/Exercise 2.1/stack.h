#ifndef STACK_H
#define STACK_H

#define MAX_ITEMS 100
typedef char ItemType;  // Changed to char to handle string reversal

class Stack {
public:
    Stack();
    bool IsEmpty() const;
    bool IsFull() const;
    void push(ItemType newItem);
    void pop(ItemType& item);
    ItemType peek() const;  // Added peek function

private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif
