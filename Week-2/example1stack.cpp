#include <iostream>
#include "example1stack.h"
using namespace std;

Stack::Stack() { top = -1; }

bool Stack::IsEmpty() const { return (top == -1); }

bool Stack::IsFull() const { return (top == MAX_ITEMS - 1); }

void Stack::push(ItemType newItem) {
    if (IsFull()) {
        cerr << "Stack Overflow!" << endl;
        return;  // No exit, just return safely
    }
    items[++top] = newItem;
}

void Stack::pop(ItemType& item) {
    if (IsEmpty()) {
        cerr << "Stack Underflow!" << endl;
        return;  // No exit, just return safely
    }
    item = items[top--];
}
