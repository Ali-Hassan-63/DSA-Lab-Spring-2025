# 📌 Example 2.1: Stack Implementation in C++

## 📁 Files Overview

1. **`stack.h` (Header File):** Defines a `Stack` class with methods for pushing, popping, and checking if the stack is full or empty.  
2. **`stack.cpp` (Implementation File):** Implements the `Stack` class methods, handling stack operations safely without abrupt program exits.  
3. **`main.cpp` (Driver Code):** Pushes numbers `0-19` into the stack, then pops and prints them.  

## 🔧 Class & Methods

### 🏗️ Constructor
```cpp
Stack::Stack() {
    top = -1; // Indicates an empty stack
}
```

### 📌 `IsEmpty()` & `IsFull()`
```cpp
bool Stack::IsEmpty() {
    return top == -1;
}

bool Stack::IsFull() {
    return top == SIZE - 1;
}
```

### ➕ `push()` Method
```cpp
void Stack::push(int value) {
    if (!IsFull()) {
        data[++top] = value;
    } else {
        std::cout << "Stack Overflow!" << std::endl;
    }
}
```

### ➖ `pop()` Method
```cpp
int Stack::pop() {
    if (!IsEmpty()) {
        return data[top--];
    } else {
        std::cout << "Stack Underflow!" << std::endl;
        return -1;
    }
}
```

## 📤 Output
```
Popped elements in reverse order (LIFO):
19 18 17 ... 2 1 0
```

🚀 **Last In, First Out (LIFO) Principle Demonstrated!**
