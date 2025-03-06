#pragma once
#include <iostream>

using namespace std;

#define MAX_QUEUE 100
typedef int ItemType;

class Queue {
private:
    ItemType items[MAX_QUEUE];
    int front, rear, count;

public:
    Queue();
    bool IsEmpty() const;
    bool IsFull() const;
    void Insert(ItemType newItem);
    void Remove(ItemType& item);
};

// Constructor
Queue::Queue() {
    count = 0;
    front = 0;
    rear = 0;
}

// Check if Queue is Empty
bool Queue::IsEmpty() const {
    return (count == 0);
}

// Check if Queue is Full
bool Queue::IsFull() const {
    return (count == MAX_QUEUE);
}

// Insert Element into Queue
void Queue::Insert(ItemType newItem) {
    if (IsFull())
        cout << "Queue overflow" << endl;
    else {
        items[rear] = newItem;
        rear = (rear + 1) % MAX_QUEUE;
        ++count;
    }
}

// Remove Element from Queue
void Queue::Remove(ItemType& item) {
    if (IsEmpty())
        cout << "Queue underflow" << endl;
    else {
        item = items[front];
        front = (front + 1) % MAX_QUEUE;
        --count;
    }
}
