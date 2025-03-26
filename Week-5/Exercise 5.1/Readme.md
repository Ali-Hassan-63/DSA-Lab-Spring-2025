# 🚀 Priority Queue Implementation in C++

This is a **simple priority queue** implemented using an **array of queues** with fixed priority levels.

## 🛠 Features:
- ✅ Supports **10 priority levels** (0 - 9)
- ✅ Elements are inserted with a **specified priority**
- ✅ **Highest priority** elements are dequeued first
- ✅ Uses a **basic array-based queue structure**

## 📜 Code Overview:
- `Queue.h` → Basic queue implementation  
- `PQue.h` → Priority queue class with **fixed 10 priority levels**  
- `main.cpp` → Testing the queue operations  

## 🚀 Usage:
```cpp
PQue pq;
pq.Insert(100, 1);
pq.Insert(200, 0);
pq.Insert(300, 2);

int removedItem;
pq.Remove(removedItem);
cout << "Removed: " << removedItem << endl;
