# 🚀 C++ Recursive Functions and Exercises

## 📌 Examples

### 🔢 Factorial Function (Example 3.1)
This function calculates the factorial of a given number using recursion. The base case is when `n` equals 0, returning 1. Otherwise, it multiplies `n` by the factorial of `n-1`.

### 🔄 Reverse Input (Example 3.2)
This function takes user input character by character and reverses it using recursion. Each character is read and stored, and the function calls itself until a newline character is encountered. The stored characters are then printed in reverse order.

### ✖️ Power Function (Example 3.3)
This function calculates the power of a base number using recursion. If the exponent is 0, the result is 1. Otherwise, the function recursively multiplies the base by itself `N-1` times.

### ⚡ Ackermann Function (Example 3.4)
The Ackermann function is a classic example of a highly recursive mathematical function that grows very quickly. It is defined based on two parameters, `m` and `n`, with different recursive rules depending on their values.

---

## 🏋️ Exercises

### 🏆 Exercise 3.1: Power Function in Tabular Form
This exercise involves computing the powers of 2 for values ranging from `N = 0` to `N = 20` and displaying them in a tabular format.

### 🧮 Exercise 3.2: Ackermann Function
This exercise requires implementing the Ackermann function and testing it with specific values to observe its rapid growth.

### 🔢 Exercise 3.3A: Print Numbers Using Recursion
A recursive function is used to print numbers from `n` down to `0`. The base case is when `n` becomes negative, at which point the recursion stops.

### 🎲 Exercise 3.3B: Binomial Coefficient Using Recursion
This exercise involves computing the binomial coefficient `C(n, k)`, which represents the number of ways to choose `k` elements from `n` elements without repetition. It follows a recursive relation based on smaller subproblems.

### 🔍 Exercise 3.3C: Check Prime Using Recursion
This function checks if a given number is prime by testing divisibility recursively. The base cases handle numbers less than 2 and direct divisibility, while the function continues checking up to `n-1`.

---

