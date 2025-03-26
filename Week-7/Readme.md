# 🔗 Doubly Linked List in C++

A **Doubly Linked List (DLL)** is a data structure where each node contains:
- **Data**
- A pointer to the **next node**
- A pointer to the **previous node**

This allows **bidirectional traversal**, unlike a singly linked list.

## 🏗 **Node Structure**
```cpp
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};
