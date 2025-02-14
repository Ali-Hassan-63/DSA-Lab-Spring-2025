# 📌 Stack-Based Algorithm Implementations in C++

This repository contains implementations of various algorithms using the Stack class in C++.

## 📜 Features
- **Validity of Parentheses**: Checks if a given expression has valid parentheses.
- **Infix to Postfix Conversion**: Converts a valid infix expression to postfix notation.
- **Postfix Evaluation**: Evaluates a valid postfix expression and returns the result.

## 📂 Files
- `stack.h` → Header file defining the stack class.
- `stack.cpp` → Implementation of stack operations.
- `main.cpp` → Demonstrates solutions to the three tasks.

## 🚀 Usage
### ✅ Validity of Parentheses
```cpp
string expr = "(3+5)*2";
cout << "Valid Parentheses: " << (isValidParentheses(expr) ? "Yes" : "No") << endl;
```

### 🔄 Infix to Postfix Conversion
```cpp
string infix = "A+B*C";
cout << "Infix to Postfix: " << infixToPostfix(infix) << endl;
```

### 🧮 Postfix Evaluation
```cpp
string postfix = "35+2*";
cout << "Postfix Evaluation: " << evaluatePostfix(postfix) << endl;
```

## 🛠 Compilation
```sh
g++ -o stack main.cpp
./stack
```

## 📧 Contact
For any queries, feel free to open an issue or reach out! 😊
