
# 🧰 Binary Tree Using STL in C++

This project demonstrates how to implement and manipulate a **Binary Tree** using the **Standard Template Library (STL)** in C++. STL components like `queue`, `stack`, and `vector` simplify tasks like level-order construction, iterative traversals, and data storage.

---

## 📁 Project Structure

```
STLBinaryTree/
├── main.cpp          // Main file with STL-based binary tree operations
└── README.md         // Documentation
```

---

## 🚀 Features

* ⚙️ **Binary Tree Creation** using STL `queue`
* 🔁 **Traversals**

  * Level-order (BFS using `queue`)
  * Inorder, Preorder, Postorder (recursive & stack-based)
* 🗃️ **Use of STL Containers**

  * `queue` for level-wise construction
  * `stack` for iterative traversals
  * `vector` for storing results

---

## 🧠 Concepts and STL Components Used

| Concept             | STL Component         |
| ------------------- | --------------------- |
| Level-order build   | `queue<Node*>`        |
| Iterative traversal | `stack<Node*>`        |
| Data storage        | `vector<int>`         |
| I/O Formatting      | `iostream`, `iomanip` |

---

## 🧱 Node Structure

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

## 🛠️ How to Run

1. Save or clone the project.
2. Compile using:

   ```bash
   g++ main.cpp -o STLBinaryTree
   ./STLBinaryTree
   ```
3. Input node values and see real-time tree operations with STL.

---

## 📷 Sample Output

```txt
Enter node values (use -1 for NULL): 1 2 3 -1 4 -1 -1 -1 -1
Level-order Traversal: 1 2 3 4
Inorder Traversal: 2 4 1 3
```

---

## 📦 Advantages of Using STL

* ✅ Cleaner and shorter code
* 🚀 Faster development
