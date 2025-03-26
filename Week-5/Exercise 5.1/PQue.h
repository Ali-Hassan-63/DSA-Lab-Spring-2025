#pragma once
#pragma once
#include "Queue.h"

class PQue {
public:
    PQue();
    bool IsFull() const;
    bool IsEmpty() const;
    void Insert(ItemType newItem, int priority);
    void Remove(ItemType& item);

private:
    Queue pQ[10];  // 10 priority levels
};

// Constructor
PQue::PQue() {}

// Check if the Priority Queue is Full
bool PQue::IsFull() const {
    for (int i = 0; i < 10; i++) {
        if (!pQ[i].IsFull())
            return false;
    }
    return true;
}

// Check if the Priority Queue is Empty
bool PQue::IsEmpty() const {
    for (int i = 0; i < 10; i++) {
        if (!pQ[i].IsEmpty())
            return false;
    }
    return true;
}

// Insert Item with Priority
void PQue::Insert(ItemType newItem, int priority) {
    if (priority < 0 || priority >= 10) {
        cout << "Invalid priority level!" << endl;
        return;
    }
    pQ[priority].Insert(newItem);
}

// Remove Item with Highest Priority
void PQue::Remove(ItemType& item) {
    for (int i = 0; i < 10; i++) {
        if (!pQ[i].IsEmpty()) {
            pQ[i].Remove(item);
            return;
        }
    }
    cout << "Priority Queue is empty!" << endl;
}