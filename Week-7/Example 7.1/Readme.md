# 🔗 Doubly Linked List (DLL) in C++

A **Doubly Linked List (DLL)** is a data structure where each node contains:
- **Data**
- A pointer to the **next node**
- A pointer to the **previous node**

This allows **bidirectional traversal**, making operations like **insertion, deletion, and reversal** more efficient compared to a **Singly Linked List**.

---

## 🏗 **Node Structure**
```cpp
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};
🔹 Features of This Implementation
✅ Insert at the Beginning
✅ Insert at the End
✅ Insert at a Specific Position
✅ Delete a Node by Value
✅ Search for a Value
✅ Reverse the List
✅ Count the Total Number of Nodes
✅ Display the List (Forward & Reverse)
