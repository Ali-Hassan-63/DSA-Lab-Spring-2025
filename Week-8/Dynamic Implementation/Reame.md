
# 🌳 Dynamic Implementation of Binary Tree in C++

This project demonstrates the dynamic implementation of a Binary Tree using C++. It includes fundamental operations such as insertion, traversal, and deletion. The structure is built using dynamic memory allocation with pointers and nodes.

---

## 📁 Project Structure

```
BinaryTree/
├── main.cpp          // Entry point of the program
├── BinaryTree.h      // Header file containing class definition
├── BinaryTree.cpp    // Source file with function definitions
└── README.md         // Project documentation
```

---

## 🚀 Features

* 📌 **Dynamic Memory Allocation** using pointers
* 🌿 **Binary Tree Creation** (manually or via insertion)
* 🔁 **Tree Traversals**

  * Preorder
  * Inorder
  * Postorder
* 🧹 **Deletion** of entire tree
* 🔍 **Search** operation (optional)
* 🆕 Extensible for other operations like height, leaf count, etc.

---

## 🧠 Concepts Used

* Classes and Objects in C++
* Pointers and Dynamic Memory
* Recursive Algorithms
* Tree Traversals
* Basic Data Structures

---

## 🛠️ How to Run

1. Clone the repository or copy the source files.
2. Compile using a C++ compiler:

   ```bash
   g++ main.cpp BinaryTree.cpp -o BinaryTree
   ./BinaryTree
   ```
3. Follow on-screen prompts to interact with the binary tree.

---

## 📷 Sample Output

```txt
Enter value to insert: 10
Enter value to insert: 5
Enter value to insert: 15
Inorder Traversal: 5 10 15
```

---

## 📚 Example Code Snippet

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

## 🤝 Contributions

Feel free to fork and contribute. Pull requests are welcome!

---

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).

---
