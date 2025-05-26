

# 🧰 General Use of STL in C++

This project provides an overview and implementation examples of the **Standard Template Library (STL)** in **C++**. STL offers a rich collection of ready-to-use classes and functions for common data structures and algorithms, making C++ programming more efficient and robust.

---

## 📦 What is STL?

The **Standard Template Library (STL)** is a powerful feature of C++ that includes:

* **Containers** – Store and manage collections of data
* **Algorithms** – Predefined functions for operations like sort, find, count, etc.
* **Iterators** – Provide access and navigation through container elements
* **Function Objects** – Enable customizable operations via operator overloading

---

## 📁 Project Structure

```
STL-Demo/
├── main.cpp          // Sample STL code implementations
└── README.md         // Documentation and overview
```

---

## 📚 STL Components Used

### 🔹 Containers

* `vector` – Dynamic array
* `list` – Doubly linked list
* `deque` – Double-ended queue
* `stack` – LIFO structure
* `queue` – FIFO structure
* `set` / `unordered_set` – Unique elements
* `map` / `unordered_map` – Key-value pairs

### 🔹 Algorithms

* `sort()`
* `reverse()`
* `find()`
* `count()`
* `accumulate()` *(from `<numeric>`)*
* `binary_search()`

### 🔹 Iterators

* `begin()`, `end()`
* `rbegin()`, `rend()`
* `auto` keyword for type deduction

---

## 🧠 Sample Code Snippet

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 2, 9, 1, 3};
    std::sort(nums.begin(), nums.end());

    for (int n : nums) {
        std::cout << n << " ";
    }
    return 0;
}
```

---

## 🚀 How to Run

1. Save the code in `main.cpp`
2. Compile with a C++ compiler:

   ```bash
   g++ main.cpp -o stl_demo
   ./stl_demo
   ```

---

## 🎯 Benefits of Using STL

* ✅ Faster development with reusable components
* 📉 Reduced risk of bugs in complex data handling
* 🔁 Easy-to-implement sorting, searching, and other algorithms
* 🧪 Robust and well-tested by the C++ community

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).
