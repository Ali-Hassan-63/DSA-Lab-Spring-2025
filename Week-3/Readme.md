# 🚀 C++ Recursive Functions and Exercises

## 📌 Examples

### 🔢 Factorial Function (Example 3.1)
This program calculates the factorial of a number using recursion.
```cpp
#include<iostream>
using namespace std;
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}
int main() {
    cout << fact(5) << endl;
    return 0;
}
```
📌 *Output:* `120`

### 🔄 Reverse Input (Example 3.2)
This function reverses user input using recursion.
```cpp
#include <iostream>
using namespace std;
void rev() {
    char ch;
    cin.get(ch);
    if (ch != '\n') {
        rev();
        cout.put(ch);
    }
}
int main() {
    rev();
    return 0;
}
```
📌 *Input:* `hello`  
📌 *Output:* `olleh`

### ✖️ Power Function (Example 3.3)
Computes `X^N` using recursion.
```cpp
#include <iostream>
using namespace std;
int power(int X, int N) {
    if (N == 0) return 1;
    return power(X, N - 1) * X;
}
int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}
```
📌 *Input:* `2 3`  
📌 *Output:* `2^3 = 8`

### ⚡ Ackermann Function (Example 4)
Demonstrates the Ackermann function using recursion.
```cpp
#include<iostream>
using namespace std;
int Ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return Ackermann(m - 1, 1);
    return Ackermann(m - 1, Ackermann(m, n - 1));
}
int main() {
    cout << "Ackermann(2, 3) = " << Ackermann(2, 3) << endl;
}
```
📌 *Output:* `Ackermann(2, 3) = 9`

---

## 🏋️ Exercises

### 🏆 Exercise 3.1: Power Function in Tabular Form
This program prints `2^N` for `N = 0 to 20` in a table.
```cpp
#include <iostream>
#include <iomanip>
using namespace std;
long long power(int X, int N) {
    if (N == 0) return 1;
    return power(X, N - 1) * X;
}
int main() {
    int base = 2;
    cout << setw(5) << "N" << setw(15) << "2^N" << endl;
    cout << "------------------------" << endl;
    for (int N = 0; N <= 20; N++) {
        cout << setw(5) << N << setw(15) << power(base, N) << endl;
    }
    return 0;
}
```
📌 *Output:* Table of `2^N` values.

### 🧮 Exercise 3.2: Ackermann Function
Computes the Ackermann function for `(3,4)`.
```cpp
#include<iostream>
using namespace std;
int Ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return Ackermann(m - 1, 1);
    return Ackermann(m - 1, Ackermann(m, n - 1));
}
int main() {
    cout << "Ackermann(3, 4) = " << Ackermann(3, 4) << endl;
}
```
📌 *Output:* `Ackermann(3, 4) = 125`

### 🔢 Exercise 3.3A: Print Numbers Using Recursion
Prints numbers from `n` to `0`.
```cpp
#include <iostream>
using namespace std;
void printNumbers(int n) {
    if (n < 0) return;
    cout << n << " ";
    printNumbers(n - 1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Numbers from " << n << " to 0: ";
    printNumbers(n);
    cout << endl;
    return 0;
}
```
📌 *Input:* `5`  
📌 *Output:* `5 4 3 2 1 0`

### 🎲 Exercise 3.3B: Binomial Coefficient Using Recursion
Finds `C(n, k)` using recursion.
```cpp
#include<iostream>
using namespace std;
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}
int main() {
    int n = 6, k = 4;
    cout << binomialCoeff(n, k);
    return 0;
}
```
📌 *Output:* `15`

### 🔍 Exercise 3.3C: Check Prime Using Recursion
Checks if a number is prime recursively.
```cpp
#include <iostream>
using namespace std;
bool isPrime(int n, int i = 2) {
    if (n < 2) return false;
    if (i == n) return true;
    if (n % i == 0) return false;
    return isPrime(n, i + 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
```
📌 *Input:* `7`  
📌 *Output:* `7 is a prime number.`

---

🔹 *These programs demonstrate recursion in various mathematical and logical operations.* 🚀

