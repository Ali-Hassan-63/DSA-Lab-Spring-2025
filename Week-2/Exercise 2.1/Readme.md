# 📌 Exercise: Modified Stack Implementation in C++

## 📁 Files Overview

1. **`stack.h` (Header File):** Defines a `Stack` class with methods for pushing, popping, peeking, and reversing a string.
2. **`stack.cpp` (Implementation File):** Implements the `Stack` class methods, handling stack operations safely.
3. **`main.cpp` (Driver Code):** Tests stack operations, including `peek()` and `reverseString()`.

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

### 🔍 `peek()` Method
```cpp
char Stack::peek() {
    if (!IsEmpty()) {
        return data[top];
    } else {
        std::cout << "Stack is empty!" << std::endl;
        return '\0';
    }
}
```

### 🔄 `reverseString()` Function
```cpp
std::string Stack::reverseString(const std::string& input) {
    Stack stack;
    for (char ch : input) {
        stack.push(ch);
    }
    
    std::string reversed;
    while (!stack.IsEmpty()) {
        reversed += stack.pop();
    }
    return reversed;
}
```

## 📤 Output
```
Peeked Top Element: X
Reversed String: olleH
```

🚀 **Enhancements:**
✅ Added `peek()` to check the top element without removing it.
✅ Implemented `reverseString()` to demonstrate string reversal using a stack.
✅ Changed `ItemType` to `char` to support string operations.
✅ Successfully tested both `peek()` and `reverseString()` in `main.cpp`. 🎯

