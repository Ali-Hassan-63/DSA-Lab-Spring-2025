# 🚀 Deque (Double-Ended Queue) in C++

A **template-based Deque (Double-Ended Queue) implementation** in C++ with **dynamic resizing** and efficient **O(1) average time complexity** for push/pop operations. 📦

## 🛠 Features
- ✅ **Push & Pop** from both front and back (`pushFront`, `pushBack`, `popFront`, `popBack`)
- 🚀 **Dynamic resizing** when full
- 🔍 **Access front & back** elements (`getFront`, `getBack`)
- 📏 **Check size** (`getSize`)
- ❌ **Check if empty** (`isEmpty`)

## 📌 How to Use
```cpp
#include "Deque.h"  // Include the header file

int main() {
    Deque<int> dq;
    dq.pushFront(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushBack(25);

    cout << "Front: " << dq.getFront() << endl;
    cout << "Back: " << dq.getBack() << endl;

    dq.popFront();
    dq.popBack();

    cout << "Front after pop: " << dq.getFront() << endl;
    cout << "Back after pop: " << dq.getBack() << endl;

    return 0;
}
```

## 🛠 Installation & Compilation
1. **Clone the repo** 📂
   ```bash
   git clone https://github.com/yourusername/Deque-CPP.git
   cd Deque-CPP
   ```
2. **Compile the program** 🏗️
   ```bash
   g++ main.cpp -o deque
   ```
3. **Run the program** 🚀
   ```bash
   ./deque
   ```

## 📜 License
This project is licensed under the MIT License. 📝

## 💡 Contributing
Feel free to fork and improve the implementation! PRs are welcome. ✨

