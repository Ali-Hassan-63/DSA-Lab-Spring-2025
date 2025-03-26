# 🔗 Introduction to Linked Lists

A **Linked List** is a linear data structure where elements (nodes) are connected using pointers instead of being stored in contiguous memory like arrays.

## 📌 Types of Linked Lists:
1️⃣ **Singly Linked List** → Each node points to the next node.  
2️⃣ **Doubly Linked List** → Nodes contain pointers to both **next** and **previous** nodes.  
3️⃣ **Circular Linked List** → The last node connects back to the first node, forming a loop.

## 🏗 Basic Node Structure:
```cpp
struct Node {
    int data;
    Node* next;
};
✅ Advantages:
✔️ Dynamic Size – No need to define size beforehand
✔️ Efficient Insertions/Deletions – Unlike arrays, no shifting is needed

❌ Disadvantages:
❌ Extra Memory Usage – Each node stores an additional pointer
❌ Slower Access – Unlike arrays, direct indexing is not possible

🔥 Applications:
Memory Management (OS)

Undo Functionality (Text Editors)

Graph Representations (Adjacency Lists)

