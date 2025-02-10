# 📌 C++ Programming Exercises & Examples

## 🏆 Example 1: Maximum of Two Integers

The code provides three different functions to find the **maximum** of two integers (`X` and `Y`):

### 🔹 `max1(int X, int Y)`
- Returns the larger of the two using the **ternary operator (`? :`)**.
- **Value-returning function.**

### 🔹 `max2(int X, int Y, int& Larger)`
- Takes two integers and a reference to an integer (`Larger`).
- Assigns the larger integer to `Larger`.
- **Void function modifying the referenced variable.**

### 🔹 `max3(int X, int Y, int* Larger)`
- Uses a pointer (`Larger`) instead of a reference.
- Assigns the larger integer to the memory location pointed to by `Larger`.
- **Void function modifying the pointed value.**

---

## 🔢 Example 2: Complex Numbers & Operator Overloading

### 🏗 **Class Definition**
The `Complex` class represents **complex numbers** with:
- **Real (`re`) and imaginary (`im`) parts**.
- **Constructors, Destructor**.
- **Methods to calculate magnitude**.
- **Operator Overloading (`+` and `=`).**

### 🔹 **Main Function Highlights**
- Creates `Complex` objects (`a`, `b` dynamically allocated, and `c`).
- Performs addition (`a + *b`) and displays results.
- Frees dynamically allocated memory (`b`) using `delete` to prevent memory leaks.

---

## 📚 Exercise 1.1: Complex Class with More Features
This program extends the `Complex` class by implementing:
- **Operator overloading for `+`, `=`, and `*` (multiplication)**.
- **Dynamic memory allocation** for one `Complex` object.
- **Displays real and imaginary parts** of operations.
- **Deletes dynamically allocated objects before program exit.**

---

## 🚀 Example 1.3: Function Templates (`GetMax`)
This program demonstrates **function templates** with a generic `GetMax` function:
- Works with **different data types**.
- Uses the **ternary operator** to find the maximum.
- Used in `main()` with:
  - Integers (`i`, `j` → stored in `k`).
  - Long Integers (`l`, `m` → stored in `n`).
- **Code reusability without redefining functions!** 🎯

---

## 🏗 Example 1.4: Class Template `mypair`
- Defines a **class template** `mypair<T>` to store and process two values.
- Implements:
  - `getmax()`: Returns the **larger** value.
- In `main()`, an instance of `mypair<int>` with values `100, 75` is created and `getmax()` is called.
- **Ensures flexibility and reusability across data types!** ✅

### 📌 **Exercise 1.2: Extended `mypair` Class**
- Adds `getmin()`: Returns the **smaller** value.
- Demonstrates **template-based design** with real-world applications.

---

## 🏗 Example 1.5: Class Template `mysequence`
This **class template** combines **templates with non-type parameters**:
- Stores an **array of `N` elements** of type `T`.
- Provides:
  - `setmember(index, value)`: Assigns value.
  - `getmember(index)`: Retrieves value.
- Demonstrates usage with **integers and doubles**.
- Ensures **reusability across different types and array sizes**!

### 📌 **Exercise 1.3: `mysequence` Enhancements**
- Adds:
  - `getmin()`: Finds the **smallest** value.
  - `getmax()`: Finds the **largest** value.
- Uses **template-based design** for different types and sizes efficiently.

---

## 📂 Example 1.6: File Handling - Copying File Contents
- Reads an **input file (`fin.txt`)** and writes its contents to **an output file (`fout.txt`)**.
- Counts the **number of characters**.
- Uses:
  - `ifstream` for reading.
  - `ofstream` for writing.
- Demonstrates **basic file I/O operations in C++!** 📝

### 📌 **Exercise 1.4: Enhanced File Handling**
- Extends functionality to count:
  - **Characters, Words, Sentences** 📖.
- Uses `bool inWord` to track words.
- Detects sentences using `.`, `!`, `?`.
- Appends results to `fout.txt`.
- **Great for text analysis!** 📊

---

## 🎓 Example 1.7: Student Data Processing (File Handling)
This program reads **student records** from `input.dat`, calculates **averages**, and writes them to `output.dat`.

### 🔹 **Features**:
- **Weighted Formula:** `0.25 * mt1 + 0.25 * mt2 + 0.5 * final`.
- Uses **file streams** (`ifstream` & `ofstream`).
- Demonstrates **data processing & structured file handling!**

---

## 🏡 Exercise 1.5: House Class (OOP & Data Management)
- Stores and manages house details: **Owner's name, Address, Bedrooms, Price**.
- Implements:
  - `input()`: Accepts house details.
  - `display()`: Prints stored data.
- Uses an **array of `House` objects (size 100)**.
- **Demonstrates OOP principles & structured data storage!** 🏠

---

## 📊 Exercise 1.6: Student Performance Analysis
This program reads **students' names & grades from a file**, processes them dynamically, and provides insights.

### 🏆 **Key Features:**
1. **File Handling**: Reads data from a user-specified file.
2. **Student Class**: Stores names, grades & calculates averages.
3. **Dynamic Data Processing**:
   - Computes **each student’s average**.
   - Determines **class average, highest, & lowest scores**.
   - Identifies students **below class average**.
4. **Formatted Output**: Uses `setw()` for aligned table display.

### 📌 **Program Flow:**
✅ Reads **student count & grades per student**.
✅ Stores data in an **array of `Student` objects**.
✅ Calculates & displays **class performance report**.
✅ Lists **students scoring below average**.

🎯 **Demonstrates C++ OOP, file I/O & structured data handling!** 🚀

---
