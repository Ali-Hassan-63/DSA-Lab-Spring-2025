#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack() { top = -1; }

bool Stack::IsEmpty() const { return (top == -1); }

bool Stack::IsFull() const { return (top == MAX_ITEMS - 1); }

void Stack::push(ItemType newItem) {
    if (IsFull()) {
        cerr << "Stack Overflow!" << endl;
        return;
    }
    items[++top] = newItem;
}

void Stack::pop(ItemType& item) {
    if (IsEmpty()) {
        cerr << "Stack Underflow!" << endl;
        return;
    }
    item = items[top--];
}

ItemType Stack::peek() const {
    if (IsEmpty()) {
        cerr << "Stack is empty!" << endl;
        return '\0';  // Return null character if empty
    }
    return items[top];
}
