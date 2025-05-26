

## 📘 README: String Sorting with Templated Binary Search Tree in C++

### 📌 Project Overview

This project demonstrates how to implement a **Binary Search Tree (BST)** using C++ templates to **sort an array of strings**. The sorted output is written to a file using **in-order traversal** of the tree.

---

### 🧱 Features

* Generic template-based `TreeType` class
* Custom `TreeNode` structure
* Efficient insertion and sorting using BST
* File output of sorted strings
* Memory management with a destructor

---

### 🧪 Sample Input

```cpp
string arr[] = {"banana", "apple", "cherry", "date", "fig", "elderberry"};
```

---

### 📤 Output File (`sorted_strings.txt`)

```
apple
banana
cherry
date
elderberry
fig
```

---

### 📂 Project Structure

```
📁 BST_String_Sort
│
├── main.cpp            // Main logic with TreeType template
├── sorted_strings.txt  // Output file with sorted strings
└── README.md           // Project documentation
```

---

### ⚙️ How to Compile and Run

#### 💻 Using g++

```bash
g++ main.cpp -o string_sort_bst
./string_sort_bst
```

---

### 🔄 How It Works

1. Strings are inserted one by one into a BST.
2. The BST automatically organizes them in sorted order.
3. An in-order traversal is performed to output the sorted strings to a text file.

---

### 📚 Concepts Used

* Templates in C++
* Binary Search Tree (BST)
* Recursion
* File handling
* In-order traversal

---

### 🧹 Cleanup

All dynamically allocated memory is released in the destructor using a recursive `DestroyHelper`.

---

