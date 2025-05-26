
# 🌴 General Binary Tree in C++

This project showcases the implementation of a **General Binary Tree** using **C++ and dynamic memory allocation**. Unlike BSTs or heaps, a general binary tree does not enforce specific ordering or completeness. It’s a foundational structure for more complex trees like expression trees, AVL trees, and decision trees.

---

## 📁 Project Structure

```
GeneralBinaryTree/
├── main.cpp          // Program entry point
├── BinaryTree.h      // Class and node declarations
├── BinaryTree.cpp    // Function implementations
└── README.md         // Documentation
```

---

## 🌟 Key Features

* 🧱 **Generic Binary Tree Node Structure**
* 🛠️ **Manual Construction** or predefined hardcoded trees
* 🔁 **Tree Traversals**:

  * Inorder
  * Preorder
  * Postorder
* 🌿 **Recursive Algorithms**
* 🚫 No strict ordering or balance required

---

## 🔧 Node Structure

```cpp
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
```

---

## 🚀 How to Run

1. Clone or copy the files.
2. Compile with g++:

   ```bash
   g++ main.cpp BinaryTree.cpp -o GeneralBinaryTree
   ./GeneralBinaryTree
   ```
3. Follow console prompts or observe sample traversal outputs.

---

## 🧠 Concepts Used

* Recursion
* Class-based node and tree structure
* Tree traversal logic
* Manual or recursive tree building

---

## 📷 Sample Output

```txt
Preorder Traversal: 1 2 4 5 3
Inorder Traversal: 4 2 5 1 3
Postorder Traversal: 4 5 2 3 1
```

---

## 🧮 Visual Representation

```
        1
       / \
      2   3
     / \
    4   5
```

---

## 📌 Use Cases

* Expression Trees
* Game Trees
* File System Trees
* Syntax Trees

---

## 📄 License

Open-source under the [MIT License](LICENSE).

---
