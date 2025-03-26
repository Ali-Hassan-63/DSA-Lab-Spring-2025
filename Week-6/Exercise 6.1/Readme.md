
---

### **2️⃣ Testing Basic Linked List Functions**
```md
# 🛠️ Testing Linked List Functions

This project implements a **singly linked list** and tests its basic operations.

## 🔹 Supported Functions:
✅ Insert at the Beginning  
✅ Insert at the End  
✅ Delete a Node  
✅ Search for a Value  
✅ Display the List  

## 📜 Code Overview:
```cpp
struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int value);
void insertAtBeginning(Node*& head, int value);
void deleteNode(Node*& head, int value);
void displayList(Node* head);
