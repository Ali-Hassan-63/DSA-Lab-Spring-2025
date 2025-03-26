#pragma once
#include "Queue.h"
#include <iostream>

using namespace std;

class PQue {
private:
    Queue* pQ;
    int numPriorities;

public:
    PQue(int n);
    ~PQue();
    bool IsFull() const;
    bool IsEmpty() const;
    void Insert(ItemType newItem, int priority);
    void Remove(ItemType& item);
};

// Constructor
PQue::PQue(int n) : numPriorities(n) {
    pQ = new Queue[n]; // Dynamically allocate n priority levels
}

// Destructor
PQue::~PQue() {
    delete[] pQ; // Free allocated memory
}

// Check if the Priority Queue is Full
bool PQue::IsFull() const {
    for (int i = 0; i < numPriorities; i++) {
        if (!pQ[i].IsFull())
            return false;
    }
    return true;
}

// Check if the Priority Queue is Empty
bool PQue::IsEmpty() const {
    for (int i = 0; i < numPriorities; i++) {
        if (!pQ[i].IsEmpty())
            return false;
    }
    return true;
}

// Insert Item with Priority
void PQue::Insert(ItemType newItem, int priority) {
    if (priority < 0 || priority >= numPriorities) {
        cout << "Invalid priority level!" << endl;
        return;
    }
    pQ[priority].Insert(newItem);
}

// Remove Item with Highest Priority
void PQue::Remove(ItemType& item) {
    for (int i = 0; i < numPriorities; i++) {
        if (!pQ[i].IsEmpty()) {
            pQ[i].Remove(item);
            return;
        }
    }
    cout << "Priority Queue is empty!" << endl;
}
