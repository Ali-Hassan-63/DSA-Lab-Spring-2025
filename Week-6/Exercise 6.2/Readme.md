
---

### **3️⃣ String Reversal Using Linked List**
```md
# 🔄 String Reversal Using Linked List

This project demonstrates **string reversal** using a **stack implemented with a linked list**.

## 🔹 Concept:
- **Push each character** of the string onto a linked list (stack).
- **Pop characters** from the stack to get the reversed string.

## 📜 Code Overview:
```cpp
struct Node {
    char data;
    Node* next;
};

void push(Node*& top, char ch);
char pop(Node*& top);
void reverseString(string str);
reverseString("HELLO");
// Output: "OLLEH"
g++ string_reverse.cpp -o string_reverse
./string_reverse
