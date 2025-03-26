
---

### **Dynamic priority queue**
```md
# 🔥 Dynamic Priority Queue in C++

This project implements a **dynamic priority queue** with **n priority levels**, allowing flexibility in handling different priority systems.

## ⚡ Features:
- 🏆 **User-defined priority levels (n)**
- 🚀 **Dynamically allocated queues** for better memory usage
- 📌 Supports **insertion, removal, and queue status checks**
- 🎯 **Low-level implementation** (avoiding STL)

## 🏗️ Code Breakdown:
- `Queue.h` → Circular queue for efficient insertion & removal  
- `PQue.h` → Priority queue with **dynamically allocated priority levels**  
- `main.cpp` → Interactive CLI for testing  

## 📌 Example Usage:
```cpp
PQue pq(5); // Priority queue with 5 levels

pq.Insert(100, 2);
pq.Insert(50, 0);
pq.Insert(200, 3);

int item;
pq.Remove(item);
cout << "Removed: " << item << endl;
