

# 🌲 Static Implementation of Binary Tree in C++

This project demonstrates a **static implementation** of a Binary Tree using **arrays** in C++. It focuses on the memory-efficient, index-based approach to represent binary trees, commonly used for **complete or nearly complete trees**, like heaps.

---

## 📁 Project Structure

```
StaticBinaryTree/
├── main.cpp          // Main file with static binary tree logic
└── README.md         // Documentation
```

---

## 🚀 Features

* 📦 **Static Array-Based Tree Representation**
* 🔢 **Index-Based Parent-Child Mapping**

  * Left Child: `2 * i + 1`
  * Right Child: `2 * i + 2`
* 🧾 **Manual and Predefined Tree Construction**
* 🔁 **Tree Traversals**

  * Inorder
  * Preorder
  * Postorder

---

## 🧠 Concepts Used

* Array-based data structures
* Binary tree mapping formulas
* Tree traversals using index recursion
* No dynamic memory or pointers

---

## 🛠️ How to Run

1. Save or clone the project files.
2. Compile using a C++ compiler:

   ```bash
   g++ main.cpp -o StaticBinaryTree
   ./StaticBinaryTree
   ```
3. Interact via console input or view predefined tree outputs.

---

## 🧮 Index Mapping

| Node | Index | Left Child Index | Right Child Index |
| ---- | ----- | ---------------- | ----------------- |
| A    | 0     | 1                | 2                 |
| B    | 1     | 3                | 4                 |
| C    | 2     | 5                | 6                 |

---

## 📷 Sample Output

```txt
Inorder Traversal: D B E A F C
```

---

## 📚 Example Code Snippet

```cpp
char tree[100];

void inorder(int index) {
    if (tree[index] == '\0') return;
    inorder(2 * index + 1);
    cout << tree[index] << " ";
    inorder(2 * index + 2);
}
```

---

## ⚠️ Limitations

* 🚫 No dynamic growth (fixed-size array)
* 🚧 Inefficient for sparse trees (wasted space)

---

## 🤝 Contributions

Pull requests and feedback are welcome. You can help improve or extend it to heaps and priority queues!

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---
